#include<stdlib.h>
#include "../../lib/Unity/src/unity.h"
#include "../../src/linked_list/linked_list.h"

void test_linked_list_should_initialize_with_1(void) {
    SingleLinkedList *list = init_single_linked_list(1); 
    TEST_ASSERT_EQUAL(1, list->head->value);
    free(list->head);
    free(list);
}

void test_linked_list_should_link_to_next_node(void) {
    int values[3] = {1,2,3};
    SingleLinkedList *list = init_single_linked_list(values[0]); 
    insert_at_end_of_single_linked_list(list, values[1]);
    insert_at_end_of_single_linked_list(list, values[2]);
    TEST_ASSERT_EQUAL(values[0], list->head->value);
    TEST_ASSERT_EQUAL(values[1], list->head->right->value);
    TEST_ASSERT_EQUAL(values[2], list->head->right->right->value);

    free(list->head->right->right);
    free(list->head->right);
    free(list->head);
    free(list);
}

void test_linked_list_should_search_nodes(void) {
    int values[3] = {4,5,6};
    int value_not_in_list = 7;
    SingleLinkedList *list_to_search = init_single_linked_list(values[0]); 
    insert_at_end_of_single_linked_list(list_to_search, values[1]);
    insert_at_end_of_single_linked_list(list_to_search, values[2]);
    TEST_ASSERT_EQUAL(values[0], search_for_node(list_to_search, values[0])->value);
    TEST_ASSERT_EQUAL(values[1], search_for_node(list_to_search, values[1])->value);
    TEST_ASSERT_EQUAL(values[2], search_for_node(list_to_search, values[2])->value);
    TEST_ASSERT_EQUAL(NULL, search_for_node(list_to_search, value_not_in_list));

    free(list_to_search->head->right->right);
    free(list_to_search->head->right);
    free(list_to_search->head);
    free(list_to_search);
}

void run_linked_list_tests(void) {
    RUN_TEST(test_linked_list_should_initialize_with_1);
    RUN_TEST(test_linked_list_should_link_to_next_node);
    RUN_TEST(test_linked_list_should_search_nodes);
}
