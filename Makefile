default:
	gcc -Wall ./src/main.c ./src/node/node.c ./src/linked_list/linked_list.c -o ./bin/main
	./bin/main

test:
	gcc ./tests/bin_node.c ./src/node/node.c -o ./tests/bin_node -lcunit
	gcc ./tests/linked_list.c ./src/linked_list/linked_list.c ./src/node/node.c -o ./tests/linked_list -lcunit
	./tests/linked_list
	./tests/bin_node

install_c_unit:
	sudo apt install libcunit1 libcunit1-doc libcunit1-dev -y
