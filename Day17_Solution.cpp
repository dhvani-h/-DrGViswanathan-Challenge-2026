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
- top() returns st.top().
- getMin() returns minSt.top().
- This ensures all operations are O(1).

Time Complexity:
- push  : O(1)
- pop   : O(1)
- top   : O(1)
- getMin: O(1)

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
