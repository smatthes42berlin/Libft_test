#!/bin/bash

source config.sh

main() {
    clear
    read_necess_file_list
    create_necess_files
    create_test_files
    check_function_name
}

create_necess_files() {
    for file in "${necess_file_list[@]}"; do
        file_path="$rel_path_to_project/$file"
        if [ ! -f $file_path ]; then
            touch $file_path
            vim -c Stdheader -c wq $file_path
        fi
    done
}

create_test_files() {
    for file in "${necess_file_list[@]}"; do
        file_name_no_ext="${file%.*}"
        file_path="./$file_name_no_ext"
        file_path+="_test.c"
        if [ ! -f $file_path ]; then
            touch $file_path
            vim -c Stdheader -c wq $file_path
        fi
    done
}

check_function_name() {
    for file in "${necess_file_list[@]}"; do
        file_path="$rel_path_to_project/$file"
        check_function_name
    done
}

read_necess_file_list() {
    readarray -t necess_file_list <file_func_list.txt
}

check_function_name() {
    for file in "${necess_file_list[@]}"; do
        file_path="$rel_path_to_project/$file"
        check_name $file_path
    done
}

check_name() {
    file_path=$1
    function_name=$(basename "${file_path%.*}")
    reg_exp="(?s)${function_name}(.{4,}){.{8,}}"
    function_name_exists=$(cat $file_path | grep -Pzo "${reg_exp}" | wc -l)
    if [ $function_name_exists -ge 1 ]; then
        echo -e "PASSED: function name check $function_name"
    else
        echo -e "FAILED: function name check $function_name"
    fi
}

main "$@"