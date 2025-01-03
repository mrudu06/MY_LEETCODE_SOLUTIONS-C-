#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<unistd.h>

int remove_duplicates(int*nums,int numsSize);
int* create_distinct_array( int* nums, int numsSize, int count);

void main() {
    int *nums_ptr;
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    if (size <= 0){
        printf("kindly give a proper size\n");
        }

    nums_ptr = (int*)malloc(size * sizeof(int));
    memset(nums_ptr, 0, size * sizeof(int));

    for (int nums_idx = 0; nums_idx < size; nums_idx++) { 
        printf("Enter the value of element %d: ", nums_idx + 1);
        scanf("%d", &nums_ptr[nums_idx]);
    }
    int distinct_nums_count=remove_duplicates(nums_ptr,size);
    printf("The number of distinct elements in the array is: %d\n", distinct_nums_count);
    
    free(nums_ptr);
}

int  remove_duplicates(int*nums,int numsSize){

    int prev_element = nums[0];
    int count = 1;
    int *distinct_nums;

    for(int nums_idx=1;nums_idx < numsSize;nums_idx++){
        if (prev_element != nums[nums_idx]){
            prev_element = nums[nums_idx];
            count++;
        }
    }
    distinct_nums = create_distinct_array(nums,numsSize,count);


    for(int distinct_nums_idx =0;distinct_nums_idx<count ; distinct_nums_idx++){
        nums[distinct_nums_idx] = distinct_nums[distinct_nums_idx];
    
        printf("The distinct elements in the array are: %d\n",nums[distinct_nums_idx]);

    }
     
    //free(distinct_nums);
    return count;
}

int* create_distinct_array( int* nums, int numsSize, int count){
    
    int* distinct_nums = (int*)malloc(count * sizeof(int));
    int prev_element = nums[0];
    distinct_nums[0] = nums[0];
    int distinct_nums_idx = 1;
 
    for(int nums_idx=1; nums_idx<numsSize; nums_idx++){
        if (prev_element != nums[nums_idx]){
            prev_element = nums[nums_idx];
            distinct_nums[distinct_nums_idx] = nums[nums_idx];
            distinct_nums_idx++;
        }
    }

    return distinct_nums;
}
