class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

        /*
        // Brute force but got tle
        int length = nums.size();
        
        // This is our output array. Think of it like a fixed C array: int missing[length];
        vector<int> missing(length); 
        int count = 0; // Tracks the current index in our missing array

        // Outer Loop: Counts from 1 to the length of the array
        for (int i = 1; i <= length; i++) {
            bool found = false;

            // Inner Loop: Manually searches the input array for 'i'
            for (int j = 0; j < length; j++) {
                if (nums[j] == i) {
                    found = true;
                    break; // Jumping out of the inner loop in C
                }
            }

            // If not found, store it at index 'count' and increment it
            if (found == false) {
                missing[count] = i;
                count = count + 1;
            }
        }

        // Resized the missing vector array
        missing.resize(count); 

        return missing;
        */


    int length = nums.size();
    // I will make a set that will have values 1 to n and then remove the elements from the set that is present in nums. So elements not present in nums will be in set and can be returned
    unordered_set<int>all_nums;

    for(int i = 1; i <= length; i++){
        all_nums.insert(i);
    }

    for (int no : nums){
        all_nums.erase(no);
    }

    // Now all_nums has only elements that are not in nums
    vector <int> output(all_nums.begin(), all_nums.end());
    return output;
    }
};