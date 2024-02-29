typedef struct t_bin_node {
    int value;
    struct t_bin_node* prev;
    struct t_bin_node* next;
} bin_node;

int get_node_value(bin_node* n);
