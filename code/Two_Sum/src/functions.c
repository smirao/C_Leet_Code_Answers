#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) 
{
    int* return_nums = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;

    for (int i = 0; i < numsSize - 1; i++) // subtract one becuse this will never check the last one
    {
        int breakable = 0;

        for (int j = i + 1; j < numsSize; j++) // add one to i because you dont want to look back 
        {
            if (nums[i] + nums[j] == target)
            {
                return_nums[0] = i;
                return_nums[1] = j;
                breakable = 1;
                break;
            }
        }
        if (breakable) {
            break;
        }
    }

    return return_nums;
}