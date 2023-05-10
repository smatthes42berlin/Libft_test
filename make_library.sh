pwd="$(pwd)"
cd "$rel_path_to_project"
make all || exit
cd $pwd
