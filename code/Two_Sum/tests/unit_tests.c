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
    int* return_size = (int*)malloc(sizeof(int));

    int nums_1[] = {2,7,11,15};
    int nums_length_1 = sizeof(nums_1)/sizeof(int);
    int target_1 = 9;
    int expected_output_1[] = {0,1};

    TEST_ASSERT_EQUAL_INT_ARRAY (expected_output_1, twoSum(nums_1, nums_length_1, target_1, return_size), *return_size);

    int nums_2[] = {3,2,4};
    int nums_length_2 = sizeof(nums_1)/sizeof(int);
    int target_2 = 6;
    int expected_output_2[] = {1,2};

    TEST_ASSERT_EQUAL_INT_ARRAY (expected_output_2, twoSum(nums_2, nums_length_2, target_2, return_size), *return_size);

    int nums_3[] = {3,3};
    int nums_length_3 = sizeof(nums_3)/sizeof(int);
    int target_3 = 6;
    int expected_output_3[] = {0,1};

    TEST_ASSERT_EQUAL_INT_ARRAY (expected_output_3, twoSum(nums_3, nums_length_3, target_3, return_size), *return_size);
}


int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_twoSum);
    return UNITY_END();
}