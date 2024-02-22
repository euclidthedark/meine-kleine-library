default:
	gcc main.c example.c -o main
	./main

test:
	gcc test.c example.c -o test -lcunit
	./test
	rm ./test

install_c_unit:
	sudo apt install libcunit1 libcunit1-doc libcunit1-dev
