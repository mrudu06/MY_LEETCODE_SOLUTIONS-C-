#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>


int remove_duplicates(int*nums,int nums_size);
void main() 
{
    int *nums_ptr;
    int size;


    printf("Enter the size of the array: ");
    scanf("%d", &size);
    if (size <= 0){
        printf("kindly give a proper size,Number of elements must be greater than 0\n");
        exit(1);
        }

    nums_ptr = (int*)malloc(size * sizeof(int));
    memset(nums_ptr, 0, size * sizeof(int));
    for (int nums_idx = 0; nums_idx < size; nums_idx++) { 
        printf("Enter the value of element %d: ", nums_idx + 1);
        scanf("%d", &nums_ptr[nums_idx]);
    }
    int unique_nums_count = remove_duplicates(nums_ptr, size);
    printf("The number of distinct elements in the array is: %d\n", unique_nums_count);

    free(nums_ptr);
}

int remove_duplicates(int*nums,int nums_size)
{

    int nums_idx = 0;
    int unique_nums_idx = 0;
    for (;nums_idx<nums_size ;nums_idx++)
    {
        if (nums[nums_idx] != nums[unique_nums_idx] )
        {
            nums[unique_nums_idx+1] = nums[nums_idx];
            unique_nums_idx++;
        }
    }

    for(int distinct_nums_idx =0;distinct_nums_idx<unique_nums_idx+1 ; distinct_nums_idx++)
    {
        printf("The distinct elements in the array are: %d\n",nums[distinct_nums_idx]);
    }


    return unique_nums_idx+1;   
}