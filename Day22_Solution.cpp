/* 
Problem: Minimum Remove to Make Valid Parentheses
Platform: LeetCode
Difficulty: Medium
Approach: Stack + Mark Invalid Parentheses
Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                st.push(i);
            }
            else if(s[i] == ')') {
                if(!st.empty()) {
                    st.pop();
                } else {
                    s[i] = '#';
                }
            }
        }
        while(!st.empty()) {
            s[st.top()] = '#';
            st.pop();
        }
        string ans;
        for(char ch : s) {
            if(ch != '#') {
                ans += ch;
            }
        }

        return ans;
    }
};

/* 
Problem: Majority Element
Platform: LeetCode
Difficulty: Easy
Approach: Boyer-Moore Voting Algorithm
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;
        for(int num : nums) {
            if(count == 0) {
                candidate = num;
            }
            if(num == candidate) {
                count++;
            } else {
                count--;
            }
        }
        return candidate;
    }
};
