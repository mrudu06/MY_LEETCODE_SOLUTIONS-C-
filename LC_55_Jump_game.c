/*The array nums is given . WE are starting from the first index and each element represents the number of jumps that can be done . 
The task is to find if it is possible to reach the end of the array (i.e) the last element .
If we are able to reach the end of the array the result should be true otherwise false .*/

/* Approach to the Problem 
Initially since we are starting from the first position the maxReach variable is set to 0 .
THen by iteration we keep updating the farthest index we can reach .
If we reach the last index or cross we return true else return false. */

bool canJump(int* nums, int numsSize) 
{int maxReach = 0;

    for (int i = 0; i < numsSize; i++) 
    {
        if (i > maxReach) 
        {
            return false;
        }

        int currentReach = i + nums[i];
        if (currentReach > maxReach) 
        {
            maxReach = currentReach;
        }

        if (maxReach >= numsSize - 1) 
        {
            return true;
        }
    }

    return false;
}
