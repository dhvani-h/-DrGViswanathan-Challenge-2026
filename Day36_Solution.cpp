/*
Problem: Sum Root to Leaf Numbers
Platform: LeetCode
Difficulty: Medium
Approach: DFS Traversal
Time Complexity: O(n)
Space Complexity: O(h)
*/
class Solution {
public:
    int dfs(TreeNode* root, int curr) {
        if(!root) return 0;
        curr = curr * 10 + root->val;
        if(!root->left && !root->right)
            return curr;
        return dfs(root->left, curr) + dfs(root->right, curr);
    }
    int sumNumbers(TreeNode* root) {
        return dfs(root, 0);
    }
};
