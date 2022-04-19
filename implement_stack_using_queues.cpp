class MyStack {
private: 
    
    queue<int> stack; 
    
public:
    
    void push(int x) {
        stack.push(x); 
    }
    
    int pop() {
        queue<int> t; 
        auto it = stack.back(); 
        int ans; 
        while (true) {
            if (stack.front() == it) {
                ans = stack.front(); 
                break; 
            }
            t.push(stack.front());
            stack.pop(); 
        }
        stack = t; 
        return ans; 
    }
    
    int top() {
        return stack.back(); 
    }
    
    bool empty() {
        return stack.empty(); 
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

class MyStack {
private: 
    
    queue<int> stack; 
    
public:
    
    void push(int x) {
        stack.push(x); 
    }
    
    int pop() {
        auto it = stack.back(); 
        int ans; 
        while (true) {
            if (stack.front() == it) {
                ans = stack.front();  
                stack.pop(); 
                break; 
            }
            stack.push(stack.front()); 
            stack.pop(); 
        }
        return ans; 
    }
    
    int top() {
        return stack.back(); 
    }
    
    bool empty() {
        return stack.empty(); 
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */