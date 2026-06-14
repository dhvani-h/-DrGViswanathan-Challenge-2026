/* 
Problem: Binary Tree Inorder Traversal
Platform: LeetCode
Difficulty: Easy
Approach: Recursive DFS (Left → Root → Right)
Time Complexity: O(n)
Space Complexity: O(h)
*/
class Solution {
public:
    vector<int> ans;
    void inorder(TreeNode* root) {
        if(root == NULL) return;
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
    }
     vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return ans;
    }
};

/* 
Problem: Find First and Last Position of Element in Sorted Array
Platform: LeetCode
Difficulty: Medium
Approach: Binary Search for First and Last Occurrence
Time Complexity: O(log n)
Space Complexity: O(1)
*/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1, last = -1;
        int left = 0, right = nums.size() - 1;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] >= target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }

            if(nums[mid] == target) {
                first = mid;
            }
        }
        left = 0;
        right = nums.size() - 1;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(nums[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
            if(nums[mid] == target) {
                last = mid;
            }
        }
        return {first, last};
    }
};
