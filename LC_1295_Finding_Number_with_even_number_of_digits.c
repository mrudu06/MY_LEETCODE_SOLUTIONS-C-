int findNumbers(int* nums, int numsSize) 
{
    int output = 0;
    int i=0;
    while (i < numsSize) 
    {
        int count = 0;
        while(nums[i] != 0)
        {
            count ++;
            nums[i] = nums[i]/10;
        }
        if (count%2 ==0)
        {
            output ++;
            
        }
        i++;
    }
    return output;
}