class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // I will check if the i element is 1 then increment count until it is not 1 (ie. 0).
        // and will update the streak with count for consecutive 1s. 0 will resent count.

        int n = nums.size();
        int count = 0;
        int streak = 0;

        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                count++;
                // Update streak
                if (count > streak){
                    streak = count;
                }
            }
            else{
                // Reset
                count = 0;
            }
        }
        return streak;
    }
};