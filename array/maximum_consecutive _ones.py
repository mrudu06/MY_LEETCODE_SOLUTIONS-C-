class Solution(object):
    def findMaxConsecutiveOnes(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        max_count = 0
        current_count = 0
        
        for num in nums:
            if num == 1:
                # Increment the count for consecutive 1s
                current_count += 1
            else:
                # We hit a 0, so update the max_count and reset current_count
                max_count = max(max_count, current_count)
                current_count = 0
        
        # We need one final check after the loop finishes 
        # (in case the array ends with a sequence of 1s)
        return max(max_count, current_count)
                