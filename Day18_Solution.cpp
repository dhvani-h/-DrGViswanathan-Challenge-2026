/* 
Problem: Implement Queue using Stacks
Platform: LeetCode
Difficulty: Easy
Approach: Two Stacks
Time Complexity:
    push  -> O(1)
    pop   -> Amortized O(1)
    peek  -> Amortized O(1)
    empty -> O(1)
Space Complexity: O(n)
*/

class MyQueue {
private:
    stack<int> inStack;
    stack<int> outStack;

    void transfer() {
        if(outStack.empty()) {
            while(!inStack.empty()) {
                outStack.push(inStack.top());
                inStack.pop();
            }
        }
    }

public:
    MyQueue() {
        
    }
    
    void push(int x) {
        inStack.push(x);
    }
    
    int pop() {
        transfer();
        int val = outStack.top();
        outStack.pop();
        return val;
    }
    
    int peek() {
        transfer();
        return outStack.top();
    }
    
    bool empty() {
        return inStack.empty() && outStack.empty();
    }
};

