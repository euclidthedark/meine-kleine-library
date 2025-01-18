UNITY = ./lib/Unity/src/unity.c

default:
	gcc -Wall ./src/main.c ./src/node/node.c ./src/linked_list/linked_list.c -o ./bin/main
	./bin/main

run_test:
	gcc -Wall ./test/test.c ./src/blah/blah.c $(UNITY) -o ./test/testblah
	./test/testblah

install_c_unit:
	sudo apt install libcunit1 libcunit1-doc libcunit1-dev -y

uninstall_c_unit:
	sudo apt remove libcunit1 libcunit1-doc libcunit1-dev -y
