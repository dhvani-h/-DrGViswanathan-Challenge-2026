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

/* 
Problem: Sign of the Product of an Array
Platform: LeetCode
Difficulty: Easy
Approach: Track sign without computing product
Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int arraySign(vector<int>& nums) {
        int sign = 1;

        for(int x : nums) {
            if(x == 0) return 0;
            if(x < 0) sign = -sign;
        }

        return sign;
    }
};
