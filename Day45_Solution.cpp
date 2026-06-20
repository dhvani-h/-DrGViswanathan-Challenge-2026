// Problem: Find the Town Judge
// LeetCode 997
// Day 45

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> score(n + 1, 0);

        for(auto &t : trust) {
            score[t[0]]--;
            score[t[1]]++;
        }

        for(int i = 1; i <= n; i++) {
            if(score[i] == n - 1)
                return i;
        }

        return -1;
    }
};

// Problem: Greatest Common Divisor of Strings
// LeetCode 1071
// Day 45

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1 + str2 != str2 + str1)
            return "";

        int n = gcd(str1.size(), str2.size());

        return str1.substr(0, n);
    }
};
