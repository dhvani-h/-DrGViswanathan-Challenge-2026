/*
Problem: Partition List
Platform: LeetCode
Difficulty: Medium

Approach:
- Create two separate linked lists:
  1. Nodes with values less than x.
  2. Nodes with values greater than or equal to x.
- Traverse the original list and append each node to the appropriate list.
- Connect the smaller list to the larger list.
- This preserves the original relative order of nodes in both partitions.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode smallDummy(0);
        ListNode largeDummy(0);

        ListNode* small = &smallDummy;
        ListNode* large = &largeDummy;

        while (head) {
            if (head->val < x) {
                small->next = head;
                small = small->next;
            } else {
                large->next = head;
                large = large->next;
            }
            head = head->next;
        }

        large->next = nullptr;
        small->next = largeDummy.next;

        return smallDummy.next;
    }
};
