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

/* 
Problem: Pascal's Triangle II
Platform: LeetCode
Difficulty: Easy
Approach: Build row using Pascal's Triangle properties
Time Complexity: O(rowIndex)
Space Complexity: O(rowIndex)
*/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex + 1, 1);

        for(int i = 1; i < rowIndex; i++) {
            row[i] = (long long)row[i - 1] * (rowIndex - i + 1) / i;
        }

        return row;
    }
};
