/* 
Problem: Valid Parenthesis String
Platform: LeetCode
Difficulty: Medium
Approach: Greedy (Maintain range of possible open brackets)
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    bool checkValidString(string s) {
        int low = 0;
        int high = 0;
        for(char ch : s) {
            if(ch == '(') {
                low++;
                high++;
            }
            else if(ch == ')') {
                low--;
                high--;
            }
            else {
                low--;
                high++;
            }

            if(high < 0) return false;
            low = max(low, 0);
        }

        return low == 0;
    }
};
