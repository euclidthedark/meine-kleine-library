default:
	gcc -Wall ./src/main.c ./src/node/node.c ./src/linked_list/linked_list.c -o main
	./main

test:
	gcc ./tests/linked_list.c ./src/linked_list.c -o test -lcunit
	./test

install_c_unit:
	sudo apt install libcunit1 libcunit1-doc libcunit1-dev -y
