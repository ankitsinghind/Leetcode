class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)): #len(nums) is for eg.1 is 4. range(len(nums)) that means range of 4. So it makes a series 0 , 1 , 2 ,3 , 4.
            for j in range(i+1, len(nums)): # loop j is stucked inside i so when j loop is finish then i will resume. Also as mentioned in Q. cannot use same element twice as starting with next index.
                if nums[i] + nums[j] == target:
                    return [i ,j]
