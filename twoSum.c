#include <stdlib.h>

int*	twoSum(int* nums, int numsSize, int target, int* returnSize)
{
    int	*returned = malloc(sizeof(int) * 2);
    int	j;
    int	i = 0;
    while (i < numsSize - 1)
    {
        j = i + 1;
        while (j < numsSize)
        {
            if (nums[i] + nums[j] == target)
            {
                returned[0] = i;
                returned[1] = j;
                *returnSize = 2;
            }
            j++;
        }
        i++;
    }
    return(returned);
}
