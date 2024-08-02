#include "../node/node.h"

typedef struct t_single_linked_list {
    BinNode *head;
} SingleLinkedList;

SingleLinkedList* init_single_linked_list(int init_value);

void insert_at_end_of_single_linked_list(SingleLinkedList *list, int value);

void destroy_single_linked_list(SingleLinkedList *list);

void print_single_linked_list(SingleLinkedList *list);
