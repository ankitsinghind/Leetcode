class Solution {
public:
    int minMoves(vector<int>& nums) {

        int n = nums.size();
        // I will find the minimum number

        int min = nums[0]; // Let

        for (int i = 1; i < n; i++) {
            if (nums[i] < min) {
                min = nums[i];
            }
        }

        int count = 0;

        for (int i = 0; i < n; i++) {
            int difference = nums[i] - min;
            count += difference;
        }
        return count;
    }
};