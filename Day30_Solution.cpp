/*
Problem: Diameter of Binary Tree
Platform: LeetCode 543
Difficulty: Easy
Approach: DFS + Height Calculation
Time Complexity: O(n)
Space Complexity: O(h)
*/
class Solution {
public:
    int diameter = 0;
    int height(TreeNode* root) {
        if (!root) return 0;
        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        diameter = max(diameter, leftHeight + rightHeight);

        return 1 + max(leftHeight, rightHeight);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return diameter;
    }
};

/*
Problem: Find the Duplicate Number
Platform: LeetCode 287
Difficulty: Medium
Approach: Floyd's Cycle Detection (Tortoise and Hare)
Time Complexity: O(n)
Space Complexity: O(1)
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};
