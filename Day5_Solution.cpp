/*
Problem: Palindrome Linked List
Platform: LeetCode 234
Difficulty: Easy

Approach:
- Use the slow and fast pointer technique to find the middle of the linked list.
- Reverse the second half of the linked list.
- Compare the first half and the reversed second half node by node.
- If all corresponding values match, the linked list is a palindrome.
- Otherwise, it is not a palindrome.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        
        while (head) {
            ListNode* nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }
        
        return prev;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* secondHalf = reverseList(slow);
        ListNode* firstHalf = head;

        while (secondHalf) {
            if (firstHalf->val != secondHalf->val)
                return false;

            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        return true;
    }
};
/*
Problem: Valid Perfect Square
Platform: LeetCode 367
Difficulty: Easy

Approach:
- Use Binary Search to find an integer whose square equals num.
- Search in the range [1, num].
- Calculate mid and its square.
- If mid * mid equals num, return true.
- If mid * mid is smaller than num, search in the right half.
- Otherwise, search in the left half.
- Use long long to avoid integer overflow.

Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    bool isPerfectSquare(int num) {
        long long left = 1, right = num;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long square = mid * mid;

            if (square == num)
                return true;
            else if (square < num)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return false;
    }
};
