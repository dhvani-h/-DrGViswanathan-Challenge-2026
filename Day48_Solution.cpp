// Problem: Check If It Is a Good Array
// LeetCode 1250
// Day 48

class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int g = 0;

        for(int x : nums)
            g = gcd(g, x);

        return g == 1;
    }
};
