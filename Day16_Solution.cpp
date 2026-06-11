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
