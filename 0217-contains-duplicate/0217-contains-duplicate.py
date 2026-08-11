class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        '''this is a brute force method.
        for i in nums:
            if nums.count(i) > 1:
                return True
        return False'''
#------------------------------------
        return len(nums) != len(set(nums))

        