class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        /*
        // Brute force method done by 2 nested loops
        for (int i = 0; i < nums.size(); i++){
            for (int j = i+1; j < nums.size(); j++){
                if (nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
        */

        // A Slight optimized solution would be to sort it then the same nos. will be together and then compare adjacents

        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;
    }
};