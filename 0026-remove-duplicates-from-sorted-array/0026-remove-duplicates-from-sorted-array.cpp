class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Pointer approach is to overwrite the element that is != with the next element
        int n = nums.size();
        int pos = 1; // Starts at 1 because the first element is always unique

        for(int i = 1; i < n; i++){
            if (nums[i] != nums[pos - 1]){

                nums[pos] = nums[i];
                pos++;
            }
        }
        return pos;
    }
};