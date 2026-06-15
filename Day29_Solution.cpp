/* 
Problem: Sum of Left Leaves
Platform: LeetCode
Difficulty: Easy
Approach: DFS Recursion
Time Complexity: O(n)
Space Complexity: O(h)
*/
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(root == NULL) return 0;

        int sum = 0;

        if(root->left &&
           root->left->left == NULL &&
           root->left->right == NULL) {
            sum += root->left->val;
        }

        sum += sumOfLeftLeaves(root->left);
        sum += sumOfLeftLeaves(root->right);

        return sum;
    }
};

/* 
Problem: Kth Largest Element in an Array
Platform: LeetCode
Difficulty: Medium
Approach: Min Heap of Size k
Time Complexity: O(n log k)
Space Complexity: O(k)
*/
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int num : nums) {
            pq.push(num);
            if(pq.size() > k) {
                pq.pop();
            }
        }

        return pq.top();
    }
};
