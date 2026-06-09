/*
Problem: Rotate List
Platform: LeetCode 61
Difficulty: Medium

Approach:
- Find the length of the linked list and the last node.
- Compute the effective rotations using k % length.
- If k becomes 0, return the original head.
- Connect the last node to the head to form a circular linked list.
- Find the new tail at position (length - k - 1).
- The node after the new tail becomes the new head.
- Break the circular link and return the new head.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0)
            return head;

        int length = 1;
        ListNode* tail = head;

        while (tail->next) {
            tail = tail->next;
            length++;
        }

        k %= length;

        if (k == 0)
            return head;

        tail->next = head;

        int stepsToNewTail = length - k - 1;
        ListNode* newTail = head;

        for (int i = 0; i < stepsToNewTail; i++) {
            newTail = newTail->next;
        }

        ListNode* newHead = newTail->next;
        newTail->next = nullptr;

        return newHead;
    }
};

/*
Problem: Plus One
Platform: LeetCode 66
Difficulty: Easy

Approach:
- Traverse the digits array from right to left.
- If a digit is less than 9, increment it and return the array.
- If a digit is 9, set it to 0 and continue carrying over.
- If all digits are 9, create a new array with a leading 1
  followed by zeros.

Time Complexity: O(n)
Space Complexity: O(1) (excluding the output array)
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            digits[i] = 0;
        }

        digits.insert(digits.begin(), 1);
        return digits;
    }
};
