/*
Problem: Search in a Binary Search Tree
Platform: LeetCode
Difficulty: Easy
Approach: Recursion in BST
Time Complexity: O(h), Space Complexity: O(h)
*/

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if (!root || root->val == val)
            return root;
        
        if (val < root->val)
            return searchBST(root->left, val);
        
        return searchBST(root->right, val);
    }
};

/*
Problem: Valid Palindrome
Platform: LeetCode
Difficulty: Easy
Approach: Two Pointer
Time Complexity: O(n), Space Complexity: O(1)
*/

class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        
        while (l < r) {
            while (l < r && !isalnum(s[l]))
                l++;
            while (l < r && !isalnum(s[r]))
                r--;
            
            if (tolower(s[l]) != tolower(s[r]))
                return false;
            
            l++;
            r--;
        }
        
        return true;
    }
};
