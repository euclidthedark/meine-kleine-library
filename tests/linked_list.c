#include<stddef.h>
#include<stdlib.h>
#include<stdio.h>
#include<CUnit/Basic.h>
#include<CUnit/CUnit.h>
#include <string.h>
#include"../src/linked_list/linked_list.h"

static int EXPECTED_BIN_NODE_VALUE[] = { 1, 2 };

int init_linked_list_suite () {
    printf("\nStarting linked_list suite\n");

    return 0;
}

int clean_linked_list_suite () {
    printf("\nEnding linked_list suite\n");

    return 0;
}

void it_inits_linked_list() {
    SingleLinkedList *list = init_single_linked_list(1);

    CU_ASSERT_EQUAL(list->head->value, 1);

    destroy_single_linked_list(list);
}

int main() {
   CU_pSuite pSuite = NULL;

   /* initialize the CUnit test registry */
   if (CUE_SUCCESS != CU_initialize_registry())
      return CU_get_error();

   /* add a suite to the registry */
   pSuite = CU_add_suite("Linked List Suite", init_linked_list_suite, clean_linked_list_suite);
   if (NULL == pSuite) {
      CU_cleanup_registry();
      return CU_get_error();
   }

   /* add the tests to the suite */
   if ((NULL == CU_add_test(pSuite, "it_inits_linked_list", it_inits_linked_list)))
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
