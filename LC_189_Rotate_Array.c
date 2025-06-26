/*
 rotate array rotaates the given original array for the given
 number of times.
 for example 1 2 3 4 5 6 7 8 9 10 is the original array
 then it roates it to 9 10 1 2 3 4 5 6 7 8 when number of times
 rotate is 2.
*/


/* Here this Function rotates a section of the array .
SO first step is to initialise a variable to access the last element .
THen using a for loop the usual swap logic is used .
*/
void reverse_array_for_rotate(int *nums,int size)
{
 //initializing the variable to acccess the last element.
    int last = size-1;
 //for loop to rotate the elements using the swap logic.
    for (int frwd_index = 0; frwd_index < size/2; frwd_index++)
    {
        int tmp;
        tmp = nums[frwd_index];
        nums[frwd_index] = nums[last-frwd_index];
        nums[last-frwd_index] = tmp;
    }
}

/* THe next step is to now rotate the whole array in different parts.
If a variable 'k' is given , then the whole array is rotated .
Then upto a section k.
THen from the section k to the remaining elements.
Atlast after these three functions the whole array with no.of time until k is done 
also this ensures the time limit is not exceeded.
*/
void rotate(int* nums, int numsSize, int k) 
{
//Here is the array size is less than 1 then defaultly the program terminates.
    if (numsSize <= 1 || k == 0) return;
//This one here is actually used to find the least no.of times to rotate the array .
    k = k % numsSize;
    reverse_array_for_rotate(nums,numsSize);
    reverse_array_for_rotate(nums,k);
    reverse_array_for_rotate(&nums[k],numsSize-k);
}
