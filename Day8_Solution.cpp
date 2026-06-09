/*
Problem: Odd Even Linked List
Platform: LeetCode 328
Difficulty: Medium

Approach:
- Maintain two pointers:
  - odd for nodes at odd positions.
  - even for nodes at even positions.
- Store the head of the even list.
- Rearrange links so that all odd-positioned nodes come first,
  followed by all even-positioned nodes.
- Finally, connect the end of the odd list to the head of the even list.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (!head || !head->next)
            return head;

        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead = even;

        while (even && even->next) {
            odd->next = even->next;
            odd = odd->next;

            even->next = odd->next;
            even = even->next;
        }

        odd->next = evenHead;

        return head;
    }
};

/*
Problem: Excel Sheet Column Number
Platform: LeetCode 171
Difficulty: Easy

Approach:
- Treat the column title as a base-26 number system.
- Traverse each character from left to right.
- For each character:
    value = character - 'A' + 1
- Update result as:
    result = result * 26 + value
- Return the final result.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long result = 0;

        for (char ch : columnTitle) {
            result = result * 26 + (ch - 'A' + 1);
        }

        return result;
    }
};
