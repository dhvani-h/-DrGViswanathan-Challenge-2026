/*
Problem: Maximum Depth of Binary Tree
Platform: LeetCode 104
Difficulty: Easy
Approach: Recursive DFS
Time Complexity: O(n)
Space Complexity: O(h)
*/
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};

/*
Problem: Flipping an Image
Platform: LeetCode 832
Difficulty: Easy
Approach: Reverse Each Row + Invert Bits
Time Complexity: O(n²)
Space Complexity: O(1)
*/
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        for (int i = 0; i < n; i++) {
            reverse(image[i].begin(), image[i].end());
            for (int j = 0; j < n; j++) {
                image[i][j] ^= 1;
            }
        }
        return image;
    }
};
