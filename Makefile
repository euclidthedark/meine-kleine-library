UNITY = ./lib/Unity/src/unity.c

default:
	gcc -Wall ./src/main.c ./src/node/node.c ./src/linked_list/linked_list.c -o ./bin/main
	./bin/main

run_test:
	# create a script to compile the whole test directory
	gcc -Wall ./test/test.c ./src/node/node.c ./src/linked_list/linked_list.c ./test/node/node_test.c ./test/linked_list/linked_list_test.c $(UNITY) -o ./test/testblah
	./test/testblah

install_c_unit:
	sudo apt install libcunit1 libcunit1-doc libcunit1-dev -y

uninstall_c_unit:
	sudo apt remove libcunit1 libcunit1-doc libcunit1-dev -y
