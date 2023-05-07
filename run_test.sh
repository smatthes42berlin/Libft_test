#!/bin/bash

source config.sh

main() {
  clear
  # rel_path_to_project="../../projects42/Libft"
  for path_to_file in "$rel_path_to_project"/*.c; do
    echo $path_to_file
    compile_code
    run_tests
    rm test
  done
  do_norminette
  check_necess_files
}

compile_code() {
  file_name=$(basename $path_to_file)
  file_base_name=$(echo "$file_name" | rev | cut -f 2- -d '.' | rev)
  test_file_name="${file_base_name}_test.c"
  cc -Wall -Wextra -Werror $path_to_file $test_file_name -o test
}

run_tests() {
  valgrind_log_name="test_valgrind"
  echo -e "\n\t>>>>running test ${test_file_name}<<<\n"
  valgrind -s --leak-check=full --log-file=$valgrind_log_name ./test
  check_memory_leaks $valgrind_log_name
  echo -e "\n\t>>>>finished test ${test_file_name}<<<\n"
  rm $valgrind_log_name
}

check_memory_leaks() {
  valgrind_log_name=$1
  not_leaking=$(cat "./$valgrind_log_name" | grep "All heap blocks were freed -- no leaks are possible" | wc -l)
  if [ $not_leaking == 1 ]; then
    echo -e "   PASSED: MEMORY LEAK CHECK"
  else
    echo -e "   FAILED: MEMORY LEAK CHECK"
    cat "./$valgrind_log_name"
    echo -e "   FAILED: MEMORY LEAK CHECK"
  fi
}

do_norminette() {
  for path_to_file in "$rel_path_to_project"/*.c; do
    echo -e "\n\t>>>>running Normcheck<<<\n"
    norminette $path_to_file
    echo -e "\n\t>>>>finished Normcheck<<<\n"
  done
}

# check_necess_files() {
# }

check_mandatory_files() {
  readarray -t necess_file_list <file_func_list.txt
  avail_file_list_rel_path=("$rel_path_to_project"/*.c)
  avail_file_list_file_names=()
  for i in "${!avail_file_list_rel_path[@]}"; do
    avail_file_list_file_names[$i]=$(basename "${avail_file_list_rel_path[$i]}")
  done
  for i in "${!necess_file_list[@]}"; do
    basename=$(basename "${necess_file_list[$i]}")
    if [[ " ${avail_file_list_file_names[*]} " =~ " ${basename} " ]]; then
      echo "PASSED: necessary file $basename found"
      check_function_name "$rel_path_to_project/$basename"
      continue
    else
      echo "FAILED: necessary file $basename not found"
    fi
  done

}

check_function_name() {
  file_rel_path=$1
  function_name=$(basename "${file_rel_path%.*}")
  reg_exp="(?s)${function_name}(.{4,}){.{8,}}"
  function_name_exists=$(cat $file_rel_path | grep -Pzo "${reg_exp}" | wc -l)
  if [ $function_name_exists -ge 1 ]; then
    echo -e "PASSED: Necess Function Name $function_name found in file at least one time"
  else
    echo -e "FAILED: Necess Function Name $function_name not found in file"
  fi
}

main "$@"
