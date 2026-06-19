// Problem: Validate Binary Search Tree
// LeetCode 98
// Day 42

class Solution {
public:
    bool check(TreeNode* root, long long minVal, long long maxVal) {
        if(!root) return true;

        if(root->val <= minVal || root->val >= maxVal)
            return false;

        return check(root->left, minVal, root->val) &&
               check(root->right, root->val, maxVal);
    }

    bool isValidBST(TreeNode* root) {
        return check(root, LLONG_MIN, LLONG_MAX);
    }
};

// Problem: Reverse Words in a String
// LeetCode 151
// Day 42

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        vector<string> words;
        string word;

        while(ss >> word)
            words.push_back(word);

        reverse(words.begin(), words.end());

        string ans = "";

        for(int i = 0; i < words.size(); i++) {
            if(i > 0) ans += " ";
            ans += words[i];
        }

        return ans;
    }
};
