/* Problem: Missing Number
   Platform: LeetCode
   Difficulty: Easy
   Approach: Math (Sum Formula)
   Time Complexity: O(n)
   Space Complexity: O(1) */

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expected = n * (n + 1) / 2;
        int actual = 0;
        for (int x : nums) actual += x;
        return expected - actual;
    }
};
