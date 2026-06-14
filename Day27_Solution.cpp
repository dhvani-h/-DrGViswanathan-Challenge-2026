/* 
Problem: Path Sum
Platform: LeetCode
Difficulty: Easy
Approach: DFS Recursion
Time Complexity: O(n)
Space Complexity: O(h)
*/
class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == NULL) return false;
        if(root->left == NULL && root->right == NULL) {
            return targetSum == root->val;
        }
        return hasPathSum(root->left, targetSum - root->val) ||
               hasPathSum(root->right, targetSum - root->val);
    }
};

/* 
Problem: Maximum Subarray
Platform: LeetCode
Difficulty: Medium
Approach: Kadane's Algorithm
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = nums[0];
        int maxSum = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            currSum = max(nums[i], currSum + nums[i]);
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};
