class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        // I will use 2 pointer both starting at 0 but left+ & right+ when element is not 0 so it can read next element but only right+ when element is 0. By this both will be pointing at different no. left at the 0 element
        int length = nums.size();

        int left = 0;
        int right = 0;

        while (right < length){
            if (nums[right] != 0){
                int temp = nums[right];
                nums[right] = nums[left];
                nums[left] = temp;

                left++;
            }
            right++;
        }
    }
};