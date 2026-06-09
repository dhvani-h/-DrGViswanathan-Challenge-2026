/*
Problem: Swapping Nodes in a Linked List
Platform: LeetCode 1721
Difficulty: Medium

Approach:
- Find the kth node from the beginning using a pointer.
- Use another pointer to locate the kth node from the end:
    - Move a temporary pointer k steps ahead.
    - Start another pointer from the head.
    - Move both pointers together until the temporary pointer reaches the end.
- Swap the values of the two identified nodes.
- Return the head of the modified linked list.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first = head;
        
        for (int i = 1; i < k; i++) {
            first = first->next;
        }

        ListNode* temp = first;
        ListNode* second = head;

        while (temp->next) {
            temp = temp->next;
            second = second->next;
        }

        swap(first->val, second->val);

        return head;
    }
};

