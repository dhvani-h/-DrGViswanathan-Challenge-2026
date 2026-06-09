/*
Problem: Remove Linked List Elements
Platform: LeetCode 203
Difficulty: Easy

Approach:
- Create a dummy node pointing to the head of the linked list.
- Use a pointer 'curr' to traverse the list.
- If the next node's value equals val, remove it by updating pointers.
- Otherwise, move to the next node.
- Return dummy->next as the new head.
- Using a dummy node helps handle cases where the head node itself needs to be removed.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* curr = dummy;

        while (curr->next) {
            if (curr->next->val == val) {
                curr->next = curr->next->next;
            } else {
                curr = curr->next;
            }
        }

        return dummy->next;
    }
};
/*
Problem: Happy Number
Platform: LeetCode 202
Difficulty: Easy

Approach:
- Repeatedly replace the number with the sum of the squares of its digits.
- Use Floyd's Cycle Detection Algorithm (Slow and Fast Pointers) to detect cycles.
- If the sequence reaches 1, the number is happy.
- If a cycle other than 1 is formed, the number is not happy.

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int getNext(int n) {
        int sum = 0;

        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }

        return sum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = getNext(n);

        while (fast != 1 && slow != fast) {
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        }

        return fast == 1;
    }
};
