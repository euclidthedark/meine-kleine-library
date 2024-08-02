#include <stdio.h>
#include<stdlib.h>
#include "./linked_list/linked_list.h"

int main() {
    SingleLinkedList *my_list = init_single_linked_list(1);
    insert_at_end_of_single_linked_list(my_list, 2);

    print_single_linked_list(my_list);
    destroy_single_linked_list(my_list);

    return 0;
}
