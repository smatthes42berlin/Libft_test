#!/bin/bash

clear

source config.sh

header_name="libft.h"
path_to_header="${rel_path_to_project}/${header_name}"
rm $header_name
cp $path_to_header $header_name 

