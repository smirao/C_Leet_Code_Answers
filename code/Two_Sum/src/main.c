#include <stdio.h>
#include <stdlib.h>
#include <include/functions.h>

void print_int_array(int* array, int len)
{
    printf("{");
    for (int i = 0; i < len; i++)
    {
        printf(" %d", array[i]);
    }
    printf(" }\n");
}

int main()
{
    int* return_size = (int*)malloc(sizeof(int));
    
    int nums_1[] = {2,7,11,15};
    int nums_length_1 = sizeof(nums_1)/sizeof(int);
    int target_1 = 9;

    print_int_array(twoSum(nums_1, nums_length_1, target_1, return_size), *return_size);
}