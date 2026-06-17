/*
Problem: Lowest Common Ancestor of a Binary Tree
Platform: LeetCode
Difficulty: Medium
Approach: Recursive DFS
Time Complexity: O(n)
Space Complexity: O(h)
*/
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root || root == p || root == q) return root;
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        if(left && right) return root;
        return left ? left : right;
    }
};

/*
Problem: Number of Segments in a String
Platform: LeetCode
Difficulty: Easy
Approach: Count Word Starts
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int countSegments(string s) {
        int count = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
                count++;
        }
        return count;
    }
};
