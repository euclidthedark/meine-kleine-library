#include <stddef.h>
#include<stdio.h>
#include<CUnit/Basic.h>
#include<CUnit/CUnit.h>
#include <string.h>
#include"../src/linked_list_node.h"

static int EXPECTED_BIN_NODE_VALUE = 5;

int init_bin_node_suite () {
    printf("\nStarting bin_node suite\n");

    return 0;
}

int clean_bin_node_suite () {
    printf("\nEnding bin_node suite\n");

    return 0;
}

void test_node_prints_value() {
    bin_node n = { 5 };
    int returned_value = get_node_value(&n);

    CU_ASSERT_EQUAL(returned_value, EXPECTED_BIN_NODE_VALUE);
}

int main() {
   CU_pSuite pSuite = NULL;

   /* initialize the CUnit test registry */
   if (CUE_SUCCESS != CU_initialize_registry())
      return CU_get_error();

   /* add a suite to the registry */
   pSuite = CU_add_suite("Bin Node Suite", init_bin_node_suite, clean_bin_node_suite);
   if (NULL == pSuite) {
      CU_cleanup_registry();
      return CU_get_error();
   }

   /* add the tests to the suite */
   if ((NULL == CU_add_test(pSuite, "test_node_prints_value", test_node_prints_value)))
   {
      CU_cleanup_registry();
      return CU_get_error();
   }

   /* Run all tests using the CUnit Basic interface */
   CU_basic_set_mode(CU_BRM_VERBOSE);
   CU_basic_run_tests();
   CU_cleanup_registry();
   return CU_get_error();
}
