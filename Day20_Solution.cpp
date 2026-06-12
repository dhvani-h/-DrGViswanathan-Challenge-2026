/* 
Problem: Evaluate Reverse Polish Notation
Platform: LeetCode
Difficulty: Medium
Approach: Stack
Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(string token : tokens) {
            if(token == "+" || token == "-" || token == "*" || token == "/") {
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();

                if(token == "+") st.push(a + b);
                else if(token == "-") st.push(a - b);
                else if(token == "*") st.push(a * b);
                else st.push(a / b);
            }
            else {
                st.push(stoi(token));
            }
        }

        return st.top();
    }
};

/* 
Problem: Find Greatest Common Divisor of Array
Platform: LeetCode
Difficulty: Easy
Approach: Find minimum and maximum element, then compute GCD
Time Complexity: O(n + log(max(nums)))
Space Complexity: O(1)
*/
class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn = *min_element(nums.begin(), nums.end());
        int mx = *max_element(nums.begin(), nums.end());
        return gcd(mn, mx);
    }
};
