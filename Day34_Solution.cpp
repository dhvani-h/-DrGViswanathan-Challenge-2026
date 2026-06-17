/*
Problem: Flatten Binary Tree to Linked List
Platform: LeetCode
Difficulty: Medium
Approach: Reverse Preorder Traversal (DFS)
Time Complexity: O(n)
Space Complexity: O(h)
*/
class Solution {
public:
    TreeNode* prev = nullptr;
    void flatten(TreeNode* root) {
        if (!root) return;
        flatten(root->right);
        flatten(root->left);
        root->right = prev;
        root->left = nullptr;
        prev = root;
    }
};

/*
Problem: Length of Last Word
Platform: LeetCode
Difficulty: Easy
Approach: Reverse Traversal
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.size() - 1;
        while(i >= 0 && s[i] == ' ') i--;
        int len = 0;
        while(i >= 0 && s[i] != ' ') {
            len++;
            i--;
        }
        return len;
    }
};
