/*
Problem: Delete Node in a Linked List
Platform: LeetCode
Difficulty: Medium

Approach:
- We are not given the head of the linked list.
- Since the node to be deleted is guaranteed not to be the last node,
  copy the value of the next node into the current node.
- Then bypass the next node by updating pointers.
- This effectively removes the next node and makes the current node
  behave as if it was deleted.

Time Complexity: O(1)
Space Complexity: O(1)
*/

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

/*
Problem: Sum of Square Numbers
Platform: LeetCode
Difficulty: Medium
Approach:
- Use the Two Pointers technique.
- Let:
      left = 0
      right = floor(sqrt(c))
- Compute:
      sum = left^2 + right^2
- If sum == c, return true.
- If sum < c, increase left to make the sum larger.
- If sum > c, decrease right to make the sum smaller.
- Continue until left > right.
Note:
- Use long long while computing squares to avoid overflow.
Time Complexity: O(sqrt(c))
Space Complexity: O(1)
*/
class Solution {
public:
    bool judgeSquareSum(int c) {
        long long left = 0;
        long long right = sqrt(c);

        while (left <= right) {
            long long sum = left * left + right * right;

            if (sum == c)
                return true;
            else if (sum < c)
                left++;
            else
                right--;
        }

        return false;
    }
};
