/*
Problem: Binary Tree Level Order Traversal
Platform: LeetCode 102
Difficulty: Medium
Approach: Breadth First Search (BFS) using Queue
Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if (!root) {
            return result;
        }
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int levelSize = q.size();
            vector<int> level;
            for (int i = 0; i < levelSize; i++) {
                TreeNode* node = q.front();
                q.pop();
                level.push_back(node->val);
                if (node->left) {
                    q.push(node->left);
                }
                if (node->right) {
                    q.push(node->right);
                }
            }
            result.push_back(level);
        }

        return result;
    }
};
