class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        // I will check all the elements that if it is < 9 or not. if it's <9
        // then i will only do +1 at last pos.

        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i] += 1;
                return digits;
            }
            // If last digit not < 9 and is 9 then i will make it 0
            else {
                digits[i] = 0;
            }
        }
        // If the no.s are 99 or 999 then all will become 00 or 000 and nothing
        // is returned so i will make a new array vector of n+1 size that will
        // have 0 only and the first elment will be changed to 1

        vector<int> output(n + 1, 0);
        output[0] = 1;
        return output;
    }
};