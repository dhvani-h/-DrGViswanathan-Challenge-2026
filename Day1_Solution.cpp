/* Problem: Reverse Linked List
   Platform: LeetCode
   Difficulty: Easy
   Approach: Iterative (Three Pointers)
   Time Complexity: O(n)
   Space Complexity: O(1) */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }

        return prev;
    }
};
