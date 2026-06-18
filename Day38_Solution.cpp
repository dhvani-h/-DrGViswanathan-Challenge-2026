/*
Problem: Search in a Binary Search Tree
Platform: LeetCode
Difficulty: Easy
Approach: Recursion in BST
Time Complexity: O(h), Space Complexity: O(h)
*/

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (!root || root->val == val)
            return root;
        
        if (val < root->val)
            return searchBST(root->left, val);
        
        return searchBST(root->right, val);
    }
};

