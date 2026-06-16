/*
Problem: Maximum Depth of Binary Tree
Platform: LeetCode 104
Difficulty: Easy
Approach: Recursive DFS
Time Complexity: O(n)
Space Complexity: O(h)
*/
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};

