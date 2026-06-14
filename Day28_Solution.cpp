/* 
Problem: Minimum Depth of Binary Tree
Platform: LeetCode
Difficulty: Easy
Approach: DFS Recursion
Time Complexity: O(n)
Space Complexity: O(h)
*/
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        if(root->left == NULL) {
            return 1 + minDepth(root->right);
        }
        if(root->right == NULL) {
            return 1 + minDepth(root->left);
        }
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};

/* 
Problem: Number of Subarrays With LCM Equal to K
Platform: LeetCode
Difficulty: Medium
Approach: Brute Force + Incremental LCM
Time Complexity: O(n² * log(max(nums)))
Space Complexity: O(1)
*/
class Solution {
public:
    int lcm(int a, int b) {
        return (a / gcd(a, b)) * b;
    }
    int subarrayLCM(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i < n; i++) {
            int currLCM = 1;
            for(int j = i; j < n; j++) {
                currLCM = lcm(currLCM, nums[j]);
                if(currLCM == k) {
                    count++;
                }
                if(currLCM > k || k % currLCM != 0) {
                    break;
                }
            }
        }
        return count;
    }
};
