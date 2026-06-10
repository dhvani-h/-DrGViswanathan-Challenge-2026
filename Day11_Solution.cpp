/* 
Problem: Remove Nth Node From End of List
Platform: LeetCode
Difficulty: Medium
Approach: Two Pointers (Fast and Slow)
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* fast = dummy;
        ListNode* slow = dummy;
        for(int i = 0; i <= n; i++) {
            fast = fast->next;
        }
        while(fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
        ListNode* temp = slow->next;
        slow->next = slow->next->next;
        delete temp;

        return dummy->next;
    }
};

/* 
Problem: Factorial Trailing Zeroes
Platform: LeetCode
Difficulty: Medium
Approach: Count factors of 5 in n!
Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;
        while(n > 0) {
            n /= 5;
            count += n;
        }

        return count;
    }
};
