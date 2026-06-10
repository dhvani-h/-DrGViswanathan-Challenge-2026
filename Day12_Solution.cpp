/* 
Problem: Insert Greatest Common Divisors in Linked List
Platform: LeetCode
Difficulty: Medium
Approach: Linked List Traversal + GCD insertion
Time Complexity: O(n * log(maxValue))
Space Complexity: O(1)
*/

class Solution {
public:

    int gcd(int a, int b) {
        while(b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(!head || !head->next) return head;

        ListNode* curr = head;

        while(curr && curr->next) {
            ListNode* nextNode = curr->next;

            int g = gcd(curr->val, nextNode->val);

            ListNode* newNode = new ListNode(g);

            curr->next = newNode;
            newNode->next = nextNode;

            curr = nextNode;
        }

        return head;
    }
};

/* 
Problem: Count Odd Numbers in an Interval Range
Platform: LeetCode
Difficulty: Easy
Approach: Mathematical counting (no iteration)
Time Complexity: O(1)
Space Complexity: O(1)
*/

class Solution {
public:
    int countOdds(int low, int high) {

        int total = high - low + 1;

        if(low % 2 == 0 && high % 2 == 0) {
            return total / 2;
        }
        return (total + 1) / 2;
    }
};
