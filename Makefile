default:
	gcc -Wall main.c ./src/node.c -o main
	./main
	rm ./main

test:
	gcc ./tests/linked_list.c ./src/linked_list.c -o test -lcunit
	./test
	rm ./test

install_c_unit:
	sudo apt install libcunit1 libcunit1-doc libcunit1-dev
