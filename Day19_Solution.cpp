/* 
Problem: Valid Parentheses
Platform: LeetCode
Difficulty: Easy
Approach: Stack
Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char ch : s) {
            if(ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            }
            else {
                if(st.empty()) return false;
                char top = st.top();
                st.pop();
                if((ch == ')' && top != '(') ||
                   (ch == '}' && top != '{') ||
                   (ch == ']' && top != '[')) {
                    return false;
                }
            }
        }
        return st.empty();
    }
};

/* 
Problem: Best Time to Buy and Sell Stock
Platform: LeetCode
Difficulty: Easy
Approach: Track Minimum Price and Maximum Profit
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        for(int i = 1; i < prices.size(); i++) {
            maxProfit = max(maxProfit, prices[i] - minPrice);
            minPrice = min(minPrice, prices[i]);
        }
        return maxProfit;
    }
};
