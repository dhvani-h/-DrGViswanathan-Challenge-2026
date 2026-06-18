/*
Problem: Binary Tree Zigzag Level Order Traversal
Platform: LeetCode
Difficulty: Medium
Approach: BFS (Level Order Traversal) with alternating direction
Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if (!root) return ans;
        
        queue<TreeNode*> q;
        q.push(root);
        bool leftToRight = true;
        
        while (!q.empty()) {
            int n = q.size();
            vector<int> level(n);
            
            for (int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();
                
                int idx = leftToRight ? i : n - 1 - i;
                level[idx] = node->val;
                
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            
            ans.push_back(level);
            leftToRight = !leftToRight;
        }
        
        return ans;
    }
};

/*
Problem: Find First Palindromic String in the Array
Platform: LeetCode
Difficulty: Easy
Approach: Check each string for palindrome
Time Complexity: O(n*m), Space Complexity: O(1)
*/

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for (string &s : words) {
            int l = 0, r = s.size() - 1;
            bool pal = true;
            
            while (l < r) {
                if (s[l++] != s[r--]) {
                    pal = false;
                    break;
                }
            }
            
            if (pal) return s;
        }
        
        return "";
    }
};
