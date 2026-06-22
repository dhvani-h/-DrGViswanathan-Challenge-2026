// Problem: Number of Substrings Containing All Three Characters
// LeetCode 1358
// Day 47

class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> last(3, -1);
        int ans = 0;

        for(int i = 0; i < s.size(); i++) {
            last[s[i] - 'a'] = i;
            ans += min({last[0], last[1], last[2]}) + 1;
        }

        return ans;
    }
};
