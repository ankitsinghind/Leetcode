class Solution {
public:
    int majorityElement(vector<int>& nums) {

        // The Logic is for example the array has 7 elements the to have maximum element the freq should be > 3.5 and then it will fill more than half of the array as per question majority element always exists
        int n = nums.size();

        sort(nums.begin(), nums.end());
        return nums[n/2];

        /*
        Got TLE
        // By bruteforce i take each element from nums in 2 loops and compare them to see how many times it occurs by incrementing count
        int n = nums.size();
        for(int i : nums){

            int count = 0;

            for(int no : nums){
                if (i == no){
                    count++;
                }
            }

            if (count > n/2){
                return i;
            }
        }
    return -1;
    */
    }
};