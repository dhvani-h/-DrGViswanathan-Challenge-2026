/*
Problem: Partition List
Platform: LeetCode
Difficulty: Medium

Approach:
- Create two separate linked lists:
  1. Nodes with values less than x.
  2. Nodes with values greater than or equal to x.
- Traverse the original list and append each node to the appropriate list.
- Connect the smaller list to the larger list.
- This preserves the original relative order of nodes in both partitions.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode smallDummy(0);
        ListNode largeDummy(0);

        ListNode* small = &smallDummy;
        ListNode* large = &largeDummy;

        while (head) {
            if (head->val < x) {
                small->next = head;
                small = small->next;
            } else {
                large->next = head;
                large = large->next;
            }
            head = head->next;
        }

        large->next = nullptr;
        small->next = largeDummy.next;

        return smallDummy.next;
    }
};

/*
Problem: Reverse Integer
Platform: LeetCode
Difficulty: Medium

Approach:
- Extract digits one by one using modulo 10.
- Build the reversed number by:
      rev = rev * 10 + digit
- Before updating rev, check whether multiplying by 10 and adding
  the next digit would cause overflow or underflow.
- If overflow/underflow occurs, return 0.
- Otherwise continue until x becomes 0.

Time Complexity: O(log10(n))
Space Complexity: O(1)
*/

class Solution {
public:
    int reverse(int x) {
        int rev = 0;

        while (x != 0) {
            int digit = x % 10;
            x /= 10;

            if (rev > INT_MAX / 10 || 
               (rev == INT_MAX / 10 && digit > 7))
                return 0;

            if (rev < INT_MIN / 10 || 
               (rev == INT_MIN / 10 && digit < -8))
                return 0;

            rev = rev * 10 + digit;
        }

        return rev;
    }
};
