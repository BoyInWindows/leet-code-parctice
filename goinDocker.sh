dir_path=$(dirname $(readlink -f "$0"))
docker run --rm -it -v ${dir_path}:/code srzzumix/googletest bash
