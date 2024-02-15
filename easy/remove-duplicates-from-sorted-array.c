#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int* nums, int numsSize)
{
    if (numsSize == 0 || numsSize == 1)
        return (numsSize);
    int i = 0;
    int count = 1;
    int temp[numsSize];
    int j = 0;
    while (i < numsSize -1)
    {
        if (nums[i] != nums[i + 1])
            temp[j++] = nums[i];
        i++;
    }
    temp[j++] = nums[numsSize - 1];
     for (int i = 0; i < j; i++)
        nums[i] = temp[i];
    return (j);
}

 int main(void)
 {
     int nums[] = {8, 1, 2, 6, 5 , 8};
     int numsSize = 6;
     printf("%d\n", removeDuplicates(nums, numsSize));
     return (0);
 }
