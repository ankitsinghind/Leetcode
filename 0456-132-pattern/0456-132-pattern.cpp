class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        // 1 - small, 3 - large, 2 - mid
        int n = nums.size();

        stack<int>st;

        int mid = INT_MIN;

        for (int i = n - 1; i >=0; i--){
            if (nums[i] < mid){
                return true; //found 1
            }

            // Update 2
            while (!st.empty() && nums[i]>st.top()) {
                mid = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }
        return false;
    }
};