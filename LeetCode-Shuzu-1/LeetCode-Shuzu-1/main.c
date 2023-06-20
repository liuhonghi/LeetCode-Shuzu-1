//
//  main.c
//  LeetCode-Shuzu-1
//
//  Created by HiLau on 2023/6/20.
//

#include <stdio.h>
#include <stdlib.h>

//数组两数之和，返回下标。

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int i = 0;
    for(i = 0;i<numsSize;i++)
    {
        int j = 0;
        for(j = i+1;j<numsSize;j++)
        {
            if(nums[i]+nums[j] == target)
            {
                int* ret = malloc(sizeof(int)*2);
                ret[0] = i;
                ret[1] = j;
                *returnSize = 2;
                return ret;
            }
        }
    }
    *returnSize = 0;
    return NULL;

}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int target = 9;
    int returnSize = 0;
    int* result = twoSum(nums, numsSize, target, &returnSize);

    if(result != NULL)
    {
        printf("[%d, %d]\n", result[0], result[1]);
        free(result); // 记得释放内存
    }
    else
    {
        printf("No solution found.\n");
    }

    return 0;
}
