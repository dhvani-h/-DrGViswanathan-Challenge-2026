/*
Problem: Delete the Middle Node of a Linked List
Platform: LeetCode 2095
Difficulty: Medium

Approach:
- If the list contains only one node, return nullptr.
- Use slow and fast pointers to find the middle node.
- Maintain a previous pointer to keep track of the node before slow.
- Move slow by one step and fast by two steps.
- When fast reaches the end, slow will be at the middle node.
- Delete the middle node by linking prev->next to slow->next.
- Return the head of the modified list.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head->next)
            return nullptr;

        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = nullptr;

        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev->next = slow->next;

        return head;
    }
};

/*
Problem: Bulb Switcher
Platform: LeetCode 319
Difficulty: Medium

Approach:
- A bulb is toggled once for every divisor of its position.
- Most numbers have divisors in pairs, resulting in an even number of toggles,
  so the bulb ends up OFF.
- Perfect squares have one unpaired divisor (their square root),
  resulting in an odd number of toggles, so the bulb ends up ON.
- Therefore, the bulbs that remain ON are exactly those at positions
  which are perfect squares.
- Count the number of perfect squares less than or equal to n.

Time Complexity: O(1)
Space Complexity: O(1)
*/

class Solution {
public:
    int bulbSwitch(int n) {
        return sqrt(n);
    }
};
