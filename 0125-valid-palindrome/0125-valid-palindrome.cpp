class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;
        
        while (left < right) {
            char l = s[left];
            char r = s[right];
            
            // 2. Check if the left character is valid (a-z, A-Z, 0-9)
            bool l_valid = (l >= 'a' && l <= 'z') || (l >= 'A' && l <= 'Z') || (l >= '0' && l <= '9');
            if (!l_valid) {
                left++;
                continue; // Skip and check next character
            }
            
            // 3. Check if the right character is valid (a-z, A-Z, 0-9)
            bool r_valid = (r >= 'a' && r <= 'z') || (r >= 'A' && r <= 'Z') || (r >= '0' && r <= '9');
            if (!r_valid) {
                right--;
                continue; // Skip and check next character
            }
            
            // 4. Convert uppercase letters to lowercase
            if (l >= 'A' && l <= 'Z') l += 32;
            if (r >= 'A' && r <= 'Z') r += 32;
            
            // 5. Compare the matching pair
            if (l != r) {
                return false; // Found a mismatch, not a palindrome
            }
            
            // Move both pointers closer to the center
            left++;
            right--;
        }
        
        return true; // All valid pairs matched perfectly
    }
};