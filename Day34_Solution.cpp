/*
Problem: Flatten Binary Tree to Linked List
Platform: LeetCode
Difficulty: Medium
Approach: Reverse Preorder Traversal (DFS)
Time Complexity: O(n)
Space Complexity: O(h)
*/
class Solution {
public:
    TreeNode* prev = nullptr;
    void flatten(TreeNode* root) {
        if (!root) return;
        flatten(root->right);
        flatten(root->left);
        root->right = prev;
        root->left = nullptr;
        prev = root;
    }
};
