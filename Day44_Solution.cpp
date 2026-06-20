// Problem: Convert Sorted List to Binary Search Tree
// LeetCode 109
// Day 44

class Solution {
public:
    TreeNode* build(vector<int>& nums, int l, int r) {
        if(l > r) return nullptr;

        int mid = l + (r - l) / 2;
        TreeNode* root = new TreeNode(nums[mid]);

        root->left = build(nums, l, mid - 1);
        root->right = build(nums, mid + 1, r);

        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        vector<int> nums;

        while(head) {
            nums.push_back(head->val);
            head = head->next;
        }

        return build(nums, 0, nums.size() - 1);
    }
};

// Problem: Maximum Number of Vowels in a Substring of Given Length
// LeetCode 1456
// Day 44

class Solution {
public:
    bool isVowel(char c) {
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }

    int maxVowels(string s, int k) {
        int count = 0, ans = 0;

        for(int i = 0; i < k; i++) {
            if(isVowel(s[i]))
                count++;
        }

        ans = count;

        for(int i = k; i < s.size(); i++) {
            if(isVowel(s[i]))
                count++;

            if(isVowel(s[i-k]))
                count--;

            ans = max(ans, count);
        }

        return ans;
    }
};
