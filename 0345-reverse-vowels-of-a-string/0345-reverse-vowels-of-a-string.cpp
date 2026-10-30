class Solution {
public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {

            if (s[left] != 'A' && s[left] != 'E' && s[left] != 'I' &&
                s[left] != 'O' && s[left] != 'U' && s[left] != 'a' &&
                s[left] != 'e' && s[left] != 'i' && s[left] != 'o' &&
                s[left] != 'u') {

                left++;
            } 
            else if (s[right] != 'A' && s[right] != 'E' && s[right] != 'I' &&
                       s[right] != 'O' && s[right] != 'U' && s[right] != 'a' &&
                       s[right] != 'e' && s[right] != 'i' && s[right] != 'o' &&
                       s[right] != 'u') {

                right--;

            } else {
                int temp = s[left];
                s[left] = s[right];
                s[right] = temp;

                left++;
                right--;
            }
        }
        return s;
    }
};