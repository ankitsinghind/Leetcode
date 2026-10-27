class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // I can just use std::erase() function to remove the value from the array directly
        std::erase(nums, val);
        return nums.size();
    }
};