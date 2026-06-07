/* Problem: Middle of the Linked List
   Platform: LeetCode
   Difficulty: Easy
   Approach: Slow & Fast Pointers
   Time Complexity: O(n)
   Space Complexity: O(1) */

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }
};
/* Problem: Add Digits
   Platform: LeetCode
   Difficulty: Easy
   Approach: Digital Root (Math)
   Time Complexity: O(1)
   Space Complexity: O(1) */
 
class Solution {
public:
    int addDigits(int num) {
        if (num == 0) return 0;
        return 1 + (num - 1) % 9;
    }
};
