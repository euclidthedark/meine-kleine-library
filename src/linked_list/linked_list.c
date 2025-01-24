#include <stdio.h>
#include <stdlib.h>
#include "./linked_list.h"

SingleLinkedList* init_single_linked_list(int init_value) {
    BinNode *node = init_bin_node(init_value);
    SingleLinkedList *list = (SingleLinkedList*)(malloc(sizeof(SingleLinkedList)));

    list->head = node;

    return list;
}

void insert_at_end_of_single_linked_list(SingleLinkedList *list, int value) {
    BinNode *new_node = init_bin_node(value);
    BinNode *current_node = list->head;

    while (current_node->right) {
        current_node = current_node->right;
    }


    current_node->right = new_node;
}

BinNode* search_for_node(SingleLinkedList *haystack, int needle) {
    BinNode *current_node = haystack->head;

    while (current_node && current_node->value != needle) {
        current_node = current_node->right;
    }

    return current_node;
}

void destroy_single_linked_list(SingleLinkedList *list) {
    BinNode *node_to_destroy = list->head;
    BinNode *next_node = NULL;

    while (node_to_destroy) {
        next_node = node_to_destroy->right;
        free(node_to_destroy);
        node_to_destroy = next_node;
    }

    free(list);
}

void print_single_linked_list(SingleLinkedList *list) {
    BinNode *current_node = list->head;

    while (current_node) {
        printf("The value of the node is %d.\n", current_node->value);
        current_node = current_node->right;
    }
}
