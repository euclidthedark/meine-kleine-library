#include "../lib/Unity/src/unity.h"
#include "../src/blah/blah.h"

void setUp(void){};
void tearDown(void){};

void test_sum_should_be_nine(void) {
    TEST_ASSERT_EQUAL(10, add_the_ints(5, 4));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sum_should_be_nine);
    return UNITY_END();
}
