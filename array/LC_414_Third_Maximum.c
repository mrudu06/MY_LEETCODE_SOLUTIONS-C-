#include <limits.h>

int thirdMax(int* nums, int numsSize) 
{
long first = LONG_MIN, second = LONG_MIN, third = LONG_MIN;

    for (int i = 0; i < numsSize; i++) {
        long num = nums[i];

        
        if (num == first || num == second || num == third) continue;

        if (num > first) 
        {
            third = second;
            second = first;
            first = num;
        } 
        else if (num > second)
        {
            third = second;
            second = num;
        } 
        else if (num > third) 
        {
            third = num;
        }
    }
        if (third == LONG_MIN) 
    {
        return (int)first;
    } 
        else 
    {
        return (int)third;
    }

} 
