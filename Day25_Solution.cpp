/* 
Problem: Implement Stack using Queues
Platform: LeetCode
Difficulty: Easy
Approach: Single Queue (Rotate Elements)
Time Complexity:
    push  -> O(n)
    pop   -> O(1)
    top   -> O(1)
    empty -> O(1)
Space Complexity: O(n)
*/
class MyStack {
public:
    queue<int> q;
    MyStack() {
        
    }
    void push(int x) {
        q.push(x);
        int sz = q.size();
        while(sz > 1) {
            q.push(q.front());
            q.pop();
            sz--;
        }
    }
    int pop() {
        int val = q.front();
        q.pop();
        return val;
    }
    int top() {
        return q.front();
    }
    bool empty() {
        return q.empty();
    }
};
