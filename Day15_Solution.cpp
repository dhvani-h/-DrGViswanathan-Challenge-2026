/*
Problem: Add Two Numbers
Platform: LeetCode
Difficulty: Medium

Approach:
- Traverse both linked lists simultaneously.
- At each step, add:
      digit from l1 + digit from l2 + carry
- Create a new node with (sum % 10).
- Update carry = sum / 10.
- Continue until both lists are exhausted and carry becomes 0.
- Use a dummy node to simplify list construction.

Time Complexity: O(max(n, m))
Space Complexity: O(max(n, m))
*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* curr = &dummy;

        int carry = 0;

        while (l1 || l2 || carry) {
            int sum = carry;

            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;

            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }

        return dummy.next;
    }
};

