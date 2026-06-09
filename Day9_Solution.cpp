/*
Problem: Swapping Nodes in a Linked List
Platform: LeetCode 1721
Difficulty: Medium

Approach:
- Find the kth node from the beginning using a pointer.
- Use another pointer to locate the kth node from the end:
    - Move a temporary pointer k steps ahead.
    - Start another pointer from the head.
    - Move both pointers together until the temporary pointer reaches the end.
- Swap the values of the two identified nodes.
- Return the head of the modified linked list.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* first = head;
        
        for (int i = 1; i < k; i++) {
            first = first->next;
        }

        ListNode* temp = first;
        ListNode* second = head;

        while (temp->next) {
            temp = temp->next;
            second = second->next;
        }

        swap(first->val, second->val);

        return head;
    }
};

/*
Problem: Nth Digit
Platform: LeetCode 400
Difficulty: Medium

Approach:
- Digits are grouped by the number of digits in the numbers:
    1-digit numbers: 1 to 9
    2-digit numbers: 10 to 99
    3-digit numbers: 100 to 999
    and so on.
- Determine which group contains the nth digit.
- Subtract the total digits contributed by smaller groups.
- Find the exact number that contains the nth digit.
- Extract the required digit from that number.

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int findNthDigit(int n) {
        long long digitLength = 1;
        long long count = 9;
        long long start = 1;

        while (n > digitLength * count) {
            n -= digitLength * count;
            digitLength++;
            count *= 10;
            start *= 10;
        }

        long long number = start + (n - 1) / digitLength;
        string numStr = to_string(number);

        return numStr[(n - 1) % digitLength] - '0';
    }
};

