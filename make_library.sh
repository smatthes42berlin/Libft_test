pwd="$(pwd)"
cd "$rel_path_to_project"
make bonus || exit
cd $pwd
