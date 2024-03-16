#include <stddef.h>
#include<stdio.h>
#include<CUnit/Basic.h>
#include<CUnit/CUnit.h>
#include <string.h>
#include"../src/linked_list.h"

static int LINKED_LIST_INIT_VALUE = 1;
static int EXPECTED_INIT_VALUE = 1;

int init_linked_list_suite () {
    printf("\nStarting bin_node suite\n");

    return 0;
}

int clean_linked_list_suite () {
    printf("\nEnding bin_node suite\n");

    return 0;
}

void the_list_inits_test() {
    linked_list *new_list = init(&LINKED_LIST_INIT_VALUE);

    CU_ASSERT_EQUAL(*new_list->value, EXPECTED_INIT_VALUE);
}

int main() {
   CU_pSuite pSuite = NULL;

   /* initialize the CUnit test registry */
   if (CUE_SUCCESS != CU_initialize_registry())
      return CU_get_error();

   /* add a suite to the registry */
   pSuite = CU_add_suite("Linked List Test Suite", init_linked_list_suite, clean_linked_list_suite);
   if (NULL == pSuite) {
      CU_cleanup_registry();
      return CU_get_error();
   }

   /* add the tests to the suite */
   if ((NULL == CU_add_test(pSuite, "the list inits", the_list_inits_test)))
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
