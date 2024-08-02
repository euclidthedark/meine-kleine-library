#include<stdlib.h>
#include "./node.h"

BinNode* init_bin_node(int init_value) {
    BinNode *node = (BinNode*)(malloc(sizeof(BinNode)));
    node->value = init_value;

    return node;
}
