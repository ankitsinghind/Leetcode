class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;

        // Remove space from the last of last word
        while(i >= 0 && s[i] == ' '){
            i--; //This will adjust the index for last character of last word instead of space
        }

        int count = 0;
        while(i >= 0 && s[i]!= ' '){
            count++;
            i--;
        }

        return count;
    }
};