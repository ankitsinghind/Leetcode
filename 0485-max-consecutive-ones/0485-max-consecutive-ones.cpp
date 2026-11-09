class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        /*
        // I will check if the i element is 1 then increment count until it is
        not 1 (ie. 0).
        // and will update the streak with count for consecutive 1s. 0 will
        reset count.

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
        */

        int n = nums.size();
        int count = 0;
        int streak = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {

                // If nums element is 1 then if i > 0 as i cannot check the
                // first element previous element so else statement will count = 1
                //i always check if the element is equal to previous element
                // so to increment streak

                if (i > 0 && nums[i - 1] == 1) {
                    count++;
                } else {
                    count = 1;
                }

                // It takes two numbers, picks the bigger one, and returns it
                streak = max(count, streak);
            }
            else{
                // Reset if not 1
                count = 0;
            }
        }
        return streak;
    };
};