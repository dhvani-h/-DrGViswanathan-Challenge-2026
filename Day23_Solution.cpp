/* 
Problem: Longest Valid Parentheses
Platform: LeetCode
Difficulty: Hard
Approach: Stack of Indices
Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int maxLen = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                st.push(i);
            }
            else {
                st.pop();

                if(st.empty()) {
                    st.push(i);
                }
                else {
                    maxLen = max(maxLen, i - st.top());
                }
            }
        }

        return maxLen;
    }
};


/* 
Problem: Search Insert Position
Platform: LeetCode
Difficulty: Easy
Approach: Binary Search
Time Complexity: O(log n)
Space Complexity: O(1)
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right) {
            int mid = left + (right - left) / 2;

            if(nums[mid] == target) {
                return mid;
            }
            else if(nums[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        return left;
    }
};
