class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // Other way in can think of from a find false weight coin question is
        // to sum all the no.s in given array and in all_nums array and then
        // subtract all_nums to given array. the difference will tell me the
        // missing no. as array as per question has distinct elements.

        // Sum of natural numbers from 0 to n by n*(n+1)/2
        int n = nums.size(); //adding 0 doesn't make any change so taking size similar to nums
        int sum_all_num = n*(n+1)/2;

        // Sum_nums
        int sum_nums = 0;
        for (int i = 0; i < nums.size(); i++){
            sum_nums += nums[i];
        }

        return sum_all_num - sum_nums;

        /*
        unordered_set<int>all_nums;

        for (int i = 0; i <= nums.size(); i++){
            all_nums.insert(i);
        }

        for(int no : nums){
            all_nums.erase(no);
        }

        vector <int> output(all_nums.begin(), all_nums.end());
        // As per the question Given an array nums containing n 'distinct
        numbers' in the range [0, n]. So only one element can be missing.

        return output[0];
        */
    }
};