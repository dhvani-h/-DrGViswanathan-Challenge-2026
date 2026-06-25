// Problem: Break a Palindrome
// LeetCode 1328
// Day 50

class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.size();

        if(n == 1) return "";

        for(int i = 0; i < n / 2; i++) {
            if(palindrome[i] != 'a') {
                palindrome[i] = 'a';
                return palindrome;
            }
        }

        palindrome[n - 1] = 'b';
        return palindrome;
    }
};

// Problem: Number Complement
// LeetCode 476
// Day 50

class Solution {
public:
    int findComplement(int num) {
        int mask = 1;

        while(mask < num)
            mask = (mask << 1) | 1;

        return mask ^ num;
    }
};
