#include <lib/Unity/src/unity.h>
#include <include/functions.h>

void setUp(void)
{
    // set stuff up here
}

void tearDown(void)
{
    // clean stuff up here
}

void test_twoSum()
{
    TEST_ASSERT_EQUAL_INT(4, twoSum(NULL, 2,2, NULL));
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_twoSum);
    return UNITY_END();
}