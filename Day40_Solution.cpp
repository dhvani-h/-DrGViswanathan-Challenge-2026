// Problem: Lowest Common Ancestor of a Binary Search Tree
// Platform: LeetCode
// Difficulty: Medium
// Approach: BST Traversal
// Time Complexity: O(H)
// Space Complexity: O(1)

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        while(root) {
            if(root->val > p->val && root->val > q->val)
                root = root->left;
            else if(root->val < p->val && root->val < q->val)
                root = root->right;
            else
                return root;
        }
        return nullptr;
    }
};

// Problem: Rotate String
// Platform: LeetCode 796
// Difficulty: Easy
// Approach: Concatenation Check
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    bool rotateString(string s, string goal) {
        if (s.length() != goal.length()) return false;
        
        string doubled = s + s;
        return doubled.find(goal) != string::npos;
    }
};
