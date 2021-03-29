#include "unity_internals.h"
#include "unity.h"

void test_div(void)
{
    TEST_ASSERT_EQUAL(1,divide(10,10));
    TEST_ASSERT_EQUAL(0,divide(10,0));
}
int main()
{
    UNITY_BEGIN();
    RUN_TEST(test_div);
    return UNITY_END();
}