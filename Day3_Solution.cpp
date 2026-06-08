/*
 * Problem   : Merge Two Sorted Lists
 * Platform  : LeetCode (#21)
 * Difficulty: Easy
 * Approach  : Dummy Head (Iterative)
 * Time      : O(m + n)
 * Space     : O(1)
 *
 * Logic     : Create a dummy head node and a `cur` tail pointer.
 *             Compare list1 and list2 values each iteration;
 *             attach the smaller node to cur->next, advance
 *             that pointer. Append the remaining list at end.
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0);
        ListNode* cur = &dummy;

        while (list1 && list2) {
            if (list1->val <= list2->val) {
                cur->next = list1;
                list1 = list1->next;
            } else {
                cur->next = list2;
                list2 = list2->next;
            }
            cur = cur->next;
        }

        cur->next = list1 ? list1 : list2;
        return dummy.next;
    }
};

/*
 * Problem   : Perfect Number
 * Platform  : LeetCode (#507)
 * Difficulty: Easy
 * Approach  : Square Root Divisor Iteration
 * Time      : O(√n)
 * Space     : O(1)
 *
 * Logic     : Iterate i from 1 to √n. If i divides n evenly,
 *             add both i and n/i to the sum (avoid counting
 *             √n twice when n is a perfect square). Exclude
 *             n itself (i=1 adds n/i=n, so start sum at -n).
 *             Return true if final sum equals n.
 */

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) return false;
        long long sum = 1;

        for (long long i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                sum += i;
                if (i != num / i) sum += num / i;
            }
        }
        return sum == num;
    }
};
