/*
Problem: Binary Tree Right Side View
Platform: LeetCode
Difficulty: Medium
Approach: Level Order Traversal (BFS)
Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if (!root) return ans;
        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                if (i == size - 1) {
                    ans.push_back(node->val);
                }
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }
        return ans;
    }
};

/*
Problem: Lexicographically Smallest Palindrome
Platform: LeetCode
Difficulty: Easy
Approach: Two Pointers (Greedy)
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int left = 0, right = s.size() - 1;
        while (left < right) {
            if (s[left] != s[right]) {
                char smaller = min(s[left], s[right]);
                s[left] = smaller;
                s[right] = smaller;
            }
            left++;
            right--;
        }
        return s;
    }
};
