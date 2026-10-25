class Solution {
public:
    bool isPalindrome(int x) {
        // -ve no. are not palindrome. x%10 gives me last no. so if the last no. is 0 ending then it is not palindrome. but if the integer x is just 0 then it is palindrome.
        if (x < 0 || x % 10 == 0 && x!=0){
            return false;
        }

        int original = x;
        long long reverse = 0;

        while(x > 0){
            // To get last digit of integer
            int last = x % 10;
            // To increase digit by 1 place
            reverse = (reverse * 10) + last;
            // Will remove last digit
            x = x / 10;
        }
        // Will return true or false
        return original == reverse;
    }
};