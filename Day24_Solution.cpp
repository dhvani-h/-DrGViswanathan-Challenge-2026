/* 
Problem: Basic Calculator
Platform: LeetCode
Difficulty: Hard
Approach: Stack + Sign Handling
Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
public:
    int calculate(string s) {
        stack<long long> st;
        long long result = 0;
        long long number = 0;
        long long sign = 1;
        for(char c : s) {
            if(isdigit(c)) {
                number = number * 10 + (c - '0');
            }
            else if(c == '+') {
                result += sign * number;
                number = 0;
                sign = 1;
            }
            else if(c == '-') {
                result += sign * number;
                number = 0;
                sign = -1;
            }
            else if(c == '(') {
                st.push(result);
                st.push(sign);
                result = 0;
                sign = 1;
            }
            else if(c == ')') {
                result += sign * number;
                number = 0;
                result *= st.top();
                st.pop();
                result += st.top();
                st.pop();
            }
        }
        result += sign * number;
        return (int)result;
    }
};


/* 
Problem: Move Zeroes
Platform: LeetCode
Difficulty: Easy
Approach: Two Pointers
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pos = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                swap(nums[pos], nums[i]);
                pos++;
            }
        }
    }
};
