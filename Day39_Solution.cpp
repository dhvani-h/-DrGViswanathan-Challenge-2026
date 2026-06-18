/*
Problem: Insert into a Binary Search Tree
Platform: LeetCode
Difficulty: Medium
Approach: Recursion in BST
Time Complexity: O(h), Space Complexity: O(h)
*/

class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (!root)
            return new TreeNode(val);
        
        if (val < root->val)
            root->left = insertIntoBST(root->left, val);
        else
            root->right = insertIntoBST(root->right, val);
        
        return root;
    }
};

/*
Problem: Remove All Adjacent Duplicates In String
Platform: LeetCode
Difficulty: Easy
Approach: Stack
Time Complexity: O(n), Space Complexity: O(n)
*/

class Solution {
public:
    string removeDuplicates(string s) {
        string st;
        
        for (char c : s) {
            if (!st.empty() && st.back() == c)
                st.pop_back();
            else
                st.push_back(c);
        }
        
        return st;
    }
};

