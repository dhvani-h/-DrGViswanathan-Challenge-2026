/*
Problem: Diameter of Binary Tree
Platform: LeetCode 543
Difficulty: Easy
Approach: DFS + Height Calculation
Time Complexity: O(n)
Space Complexity: O(h)
*/
class Solution {
public:
    int diameter = 0;
    int height(TreeNode* root) {
        if (!root) return 0;
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        diameter = max(diameter, leftHeight + rightHeight);

        return 1 + max(leftHeight, rightHeight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
    }
};
