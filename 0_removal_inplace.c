#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<unistd.h>

int* zero_removal(int* nums, int nums_Size);

void main()
{
    int* nums_ptr;
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0)
    {
        printf("kindly give a proper size\n");
    }

    nums_ptr = (int*)malloc(size * sizeof(int));
    memset(nums_ptr, 0, size * sizeof(int));

    for (int nums_idx = 0; nums_idx < size; nums_idx++)
    {
        printf("Enter the value of element %d: ", nums_idx + 1);
        scanf("%d", &nums_ptr[nums_idx]);
    }

    int* nonzero_array = zero_removal(nums_ptr, size);

    free(nums_ptr);

}

int * zero_removal(int* nums, int nums_Size)
{
    int non_zero_idx = 0;
    for (int nums_idx = 0; nums_idx < nums_Size; nums_idx++)
    {
        if (nums[nums_idx] != 0)
        {
            nums[non_zero_idx] = nums[nums_idx];
            printf("The non-zero elements in the array are: %d\n", nums[non_zero_idx]);
            non_zero_idx++;

        }
        
    }

    
   return nums;

}
