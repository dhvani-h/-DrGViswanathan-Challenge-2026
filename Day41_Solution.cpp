// Problem: Delete Node in a BST
// LeetCode 450
// Day 41

class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return nullptr;

        if(key < root->val)
            root->left = deleteNode(root->left, key);

        else if(key > root->val)
            root->right = deleteNode(root->right, key);

        else {
            if(!root->left) return root->right;
            if(!root->right) return root->left;

            TreeNode* temp = root->right;

            while(temp->left)
                temp = temp->left;

            root->val = temp->val;
            root->right = deleteNode(root->right, temp->val);
        }

        return root;
    }
};

// Problem: Longest Common Prefix
// LeetCode 14
// Day 41

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];

        for(int i = 1; i < strs.size(); i++) {
            int j = 0;

            while(j < ans.size() && j < strs[i].size() && ans[j] == strs[i][j]) {
                j++;
            }

            ans = ans.substr(0, j);
        }

        return ans;
    }
};
