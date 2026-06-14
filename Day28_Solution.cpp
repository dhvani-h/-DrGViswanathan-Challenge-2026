/* 
Problem: Minimum Depth of Binary Tree
Platform: LeetCode
Difficulty: Easy
Approach: DFS Recursion
Time Complexity: O(n)
Space Complexity: O(h)
*/
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        if(root->left == NULL) {
            return 1 + minDepth(root->right);
        }
        if(root->right == NULL) {
            return 1 + minDepth(root->left);
        }
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};
