/*
Problem: Add Two Numbers
Platform: LeetCode
Difficulty: Medium

Approach:
- Traverse both linked lists simultaneously.
- At each step, add:
      digit from l1 + digit from l2 + carry
- Create a new node with (sum % 10).
- Update carry = sum / 10.
- Continue until both lists are exhausted and carry becomes 0.
- Use a dummy node to simplify list construction.

Time Complexity: O(max(n, m))
Space Complexity: O(max(n, m))
*/

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);
        ListNode* curr = &dummy;

        int carry = 0;

        while (l1 || l2 || carry) {
            int sum = carry;

            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }

            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }

            carry = sum / 10;

            curr->next = new ListNode(sum % 10);
            curr = curr->next;
        }

        return dummy.next;
    }
};

/*
Problem: Excel Sheet Column Title
Platform: LeetCode
Difficulty: Easy

Approach:
- This is similar to converting a number to base-26.
- The difference is that Excel columns are 1-indexed:
      A = 1, B = 2, ..., Z = 26
- Before taking modulo, decrement the number by 1.
- Extract the character:
      char('A' + columnNumber % 26)
- Append it to the result.
- Divide columnNumber by 26 and continue.
- Reverse the result at the end.

Time Complexity: O(log26(n))
Space Complexity: O(log26(n))
*/

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans;

        while (columnNumber > 0) {
            columnNumber--;

            ans += char('A' + (columnNumber % 26));

            columnNumber /= 26;
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};
