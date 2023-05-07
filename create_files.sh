#!/bin/bash

clear

source config.sh

main() {
    read_necess_file_list
    create_necess_files
    create_test_files
}

create_necess_files() {
    for file in "${necess_file_list[@]}"; do
        file_path="$rel_path_to_project/$file"
        if [ ! -f $file_path ]; then
            touch $file_path
            vim -c Stdheader -c wq $file_path
        fi
        check_name_definition "necess files"
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
        check_name_testing "test files"
    done
}

read_necess_file_list() {
    readarray -t necess_file_list <file_func_list.txt
}

check_name_definition() {
    function_name=$(basename "${file_path%.*}")
    reg_exp="(?s)${function_name}(.{4,}){.{8,}}"
    function_name_exists=$(cat $file_path | grep -Pzo "${reg_exp}" | wc -l)
    if [ $function_name_exists -ge 1 ]; then
        echo -e "PASSED: $1 function name check $function_name"
    else
        echo -e "FAILED: $1 function name check $function_name"
    fi
}

check_name_testing() {
    function_name=$(basename "${file_path%.*}")
    function_name="${function_name%_test}"
    reg_exp="${function_name}(.*);"
    function_name_exists=$(cat $file_path | grep -E "${reg_exp}" | wc -l)
    if [ $function_name_exists -ge 2 ]; then
        echo -e "PASSED: $1 function name check $function_name"
    else
        echo -e "FAILED: $1 function name check $function_name"
    fi
}

main "$@"
