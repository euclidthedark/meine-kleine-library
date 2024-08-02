typedef struct t_bin_node {
    int value;
    struct t_bin_node *left, *right;
} BinNode;

BinNode* init_bin_node(int init_value);
