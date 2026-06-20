// Problem: Kth Smallest Element in a BST
// LeetCode 230
// Day 43

class Solution {
public:
    int k, ans;

    void inorder(TreeNode* root) {
        if(!root) return;
        inorder(root->left);
        if(--k == 0) {
            ans = root->val;
            return;
        }
        inorder(root->right);
    }

    int kthSmallest(TreeNode* root, int k) {
        this->k = k;
        inorder(root);
        return ans;
    }
};
