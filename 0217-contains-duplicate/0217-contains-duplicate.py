class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        #brute force
        '''for i in range(len(nums)): # range from 0 to 3 as ;en is 4.
            for j in range(i + 1, len(nums)): # when index i = 0, then check at index after that(you will not check yourself) till index 3 as len is 4.
                if nums[i] == nums[j]: # compare num at index 0 to all the nums after that one by one. if founf true if not make i = 1.
                    return True
                
        return False'''


        '''this is a brute force method.
        for i in nums:
            if nums.count(i) > 1:
                return True
        return False'''
#------------------------------------
#Optimized
        return len(nums) != len(set(nums))

        