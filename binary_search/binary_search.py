if nums == []:
            return -1

        left = 0
        right = len(nums) - 1
        while left <= right: # while the iterators havent met
            mid = ((right - left) / 2) + left # get a mid point between them
            if nums[mid] == target:
                return mid
            elif nums[mid] > target: # if the middle is greater than target, we need to refine search into the other half, so halve it
                right = mid - 1
            else: # middle is less than the target, so we need to refine to the new half
                left = mid + 1
        return -1