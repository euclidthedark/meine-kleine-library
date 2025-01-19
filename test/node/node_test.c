#include<stdlib.h>
#include "../../lib/Unity/src/unity.h"
#include "../../src/node/node.h"

void test_node_should_return_5(void) {
    BinNode *node = init_bin_node(5);
    TEST_ASSERT_EQUAL(5, node->value);
    free(node);
}

void test_node_should_have_null_left_branch(void) {
    BinNode *node = init_bin_node(3);
    TEST_ASSERT_EQUAL(NULL, node->left);
    free(node);
}

void test_node_should_have_null_right_branch(void) {
    BinNode *node = init_bin_node(3);
    TEST_ASSERT_EQUAL(NULL, node->right);
    free(node);
}

void run_node_tests(void) {
    RUN_TEST(test_node_should_return_5);
    RUN_TEST(test_node_should_have_null_left_branch);
    RUN_TEST(test_node_should_have_null_right_branch);
}
