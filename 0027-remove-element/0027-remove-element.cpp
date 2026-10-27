class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // Instead of using builtin function i should just replace the value in original array with end element and iterate this increase the index by 1.
        // As the questions states- It does not matter what you leave beyond the returned k (hence they are underscores) also is k = 2 then it checks only first 2 values.

        int left = 0;
        int right = nums.size() - 1;
        int count = 0;

        while(left <= right){
            if (nums[left] == val){
                nums[left] = nums[right];
                right--;
                count++;
            }
            else{
                left++;
            }
        }

        return nums.size() - count; // or return left as left only + when val is not in nums


        /*

        // I can just use std::erase() function to remove the value from the array directly
        std::erase(nums, val);
        return nums.size();

        */
    }
};