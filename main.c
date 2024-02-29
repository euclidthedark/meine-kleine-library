#include<stdio.h>

int main() {
    int fd = fopen("test.txt", "w");
    if (fd < 0)
        return -1;

    fclose(fd);
    return 0;
}
