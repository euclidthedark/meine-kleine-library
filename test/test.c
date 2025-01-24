#include "../lib/Unity/src/unity.h"
#include "./node/node_test.h"
#include "./linked_list/linked_list_test.h"

void setUp(void){};
void tearDown(void){};

int main(void) {
    UNITY_BEGIN();

    run_node_tests();
    run_linked_list_tests();

    return UNITY_END();
}
