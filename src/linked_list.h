// TODO: make the value argument be generic 
typedef struct t_linked_list {
    int *value;
    struct t_linked_list *prev;
    struct t_linked_list *next;
} linked_list;

linked_list* init(int *init_value);
