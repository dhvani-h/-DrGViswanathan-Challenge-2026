/* 
Problem: Remove Duplicates from Sorted List II
Platform: LeetCode
Difficulty: Medium
Approach: Two Pointers + Dummy Node (Skip all duplicates)
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;
        ListNode* curr = head;

        while(curr) {
            if(curr->next && curr->val == curr->next->val) {
                int dupVal = curr->val;
                while(curr && curr->val == dupVal) {
                    ListNode* temp = curr;
                    curr = curr->next;
                    delete temp;
                }

                prev->next = curr;
            }
            else {
                prev = curr;
                curr = curr->next;
            }
        }

        return dummy->next;
    }
};
