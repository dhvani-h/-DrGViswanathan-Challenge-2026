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

/*
Problem: Reverse Vowels of a String
Platform: LeetCode
Difficulty: Easy
Approach: Two Pointers
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
    string reverseVowels(string s) {
        int left = 0, right = s.size() - 1;
        while(left < right) {
            while(left < right && !isVowel(s[left])) left++;
            while(left < right && !isVowel(s[right])) right--;
            swap(s[left], s[right]);
            left++;
            right--;
        }
        return s;
    }
};
