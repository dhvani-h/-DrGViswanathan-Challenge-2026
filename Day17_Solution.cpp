/*
Problem: Min Stack
Platform: LeetCode
Difficulty: Medium
Approach:
- Use two stacks:
  1. st     -> stores all elements.
  2. minSt  -> stores the minimum element at each stage.
- While pushing:
      push value into st.
      If minSt is empty or value <= minSt.top(),
      push value into minSt as well.
- While popping:
      If st.top() == minSt.top(),
      pop from both stacks.
Time Complexity:O(1)
Space Complexity: O(n)
*/

class MinStack {
public:
    stack<int> st;
    stack<int> minSt;
    MinStack() {
    }
    void push(int val) {
        st.push(val);

        if (minSt.empty() || val <= minSt.top())
            minSt.push(val);
    }
    void pop() {
        if (st.top() == minSt.top())
            minSt.pop();
        st.pop();
    }
    int top() {
        return st.top();
    }
    int getMin() {
        return minSt.top();
    }
};

/*
Problem: Two Sum
Platform: LeetCode
Difficulty: Easy
Approach:
- Use a hash map to store numbers and their indices.
- For each element nums[i]:
      complement = target - nums[i]
- Check if complement already exists in the map.
- If it exists, return the indices.
- Otherwise, store nums[i] and its index in the map.
- Since exactly one solution exists, we will always find an answer.
Time Complexity: O(n)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (mp.count(complement)) {
                return {mp[complement], i};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
