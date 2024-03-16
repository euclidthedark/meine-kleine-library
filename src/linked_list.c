#include<stdio.h>
#include"linked_list.h"

linked_list* init(int *init_value) {
    linked_list new_list = { init_value };
    linked_list *list_to_return = &new_list;

    return list_to_return;
}
