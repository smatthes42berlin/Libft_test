#!/bin/bash

clear

source config.sh

main() {
  proj_files="$rel_path_to_project"/*.c;
  for path_to_file in "$rel_path_to_project"/*.c; do
    chmod  777 $path_to_file 
    line_count=$(cat $path_to_file | wc -l)
    if [[ $line_count > 17 ]]; then
      compile_code
      run_tests
      rm test
    fi
  done
  # do_norminette
}

compile_code() {
  file_name=$(basename $path_to_file)
  file_base_name=$(echo "$file_name" | rev | cut -f 2- -d '.' | rev)
  test_file_name="${file_base_name}_test.c"
  cc -Wall -Wextra -Werror $path_to_file $test_file_name "test_util.c" -o test
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

main "$@"
