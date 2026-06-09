/*
Problem: Linked List Cycle
Platform: LeetCode 141
Difficulty: Easy

Approach:
- Use Floyd's Cycle Detection Algorithm (Tortoise and Hare).
- Initialize two pointers, slow and fast, at the head.
- Move slow by one step and fast by two steps.
- If there is a cycle, both pointers will eventually meet.
- If fast reaches NULL or fast->next reaches NULL, no cycle exists.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return true;
        }

        return false;
    }
};
/*
Problem: Palindrome Number
Platform: LeetCode 9
Difficulty: Easy

Approach:
- Negative numbers cannot be palindromes.
- Store the original number.
- Reverse the digits of the number.
- Compare the reversed number with the original number.
- If both are equal, the number is a palindrome.

Time Complexity: O(log10(n))
Space Complexity: O(1)
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        long long reversed = 0;
        int original = x;

        while (x > 0) {
            reversed = reversed * 10 + x % 10;
            x /= 10;
        }

        return reversed == original;
    }
};
