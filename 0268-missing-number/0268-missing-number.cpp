class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int>all_nums;

        for (int i = 0; i <= nums.size(); i++){
            all_nums.insert(i);
        }

        for(int no : nums){
            all_nums.erase(no);
        }
        
        vector <int> output(all_nums.begin(), all_nums.end());
        // As per the question Given an array nums containing n 'distinct numbers' in the range [0, n]. So only one element can be missing.

        return output[0];
    }
};