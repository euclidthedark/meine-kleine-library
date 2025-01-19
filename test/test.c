#include<stdlib.h>
#include "../lib/Unity/src/unity.h"
#include "./node/node_test.h"

void setUp(void){};
void tearDown(void){};

int main(void) {
    UNITY_BEGIN();
    run_node_tests();
    return UNITY_END();
}
