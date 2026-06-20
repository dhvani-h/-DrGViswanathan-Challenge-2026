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

// Problem: Zigzag Conversion
// LeetCode 6
// Day 43

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1 || numRows >= s.size()) return s;
        vector<string> rows(numRows);
        int currRow = 0;
        bool down = false;
        for(char c : s) {
            rows[currRow] += c;
            if(currRow == 0 || currRow == numRows - 1)
                down = !down;
            currRow += down ? 1 : -1;
        }

        string ans;
        for(string &row : rows)
            ans += row;
        return ans;
    }
};
