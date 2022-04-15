class MinStack {
private: 
    int* stack; 
    int* minStack; 
    int topPtr; 
    int minPtr;
    int count; 
public: 
    MinStack() { 
        stack = new int [10000]; 
        minStack = new int [10000]; 
        count = 0; 
        topPtr = -1; 
        minPtr = -1; 
    }
    ~MinStack() {
        delete [] stack; 
        delete [] minStack; 
    }
    void push(int val) {
        if (topPtr >= 10000) {
            return ;
        }
        stack[topPtr+1] = val;
        if (minPtr >= 0) {
            if (minStack[minPtr] > val) {
                minStack[minPtr+1] = val;
            } else {
                minStack[minPtr+1] = minStack[minPtr];
            }
        } else {
            minStack[minPtr+1] = val;
        }
        topPtr++; 
        minPtr++; 
        count++; 
    }
    void pop() {
        topPtr--; 
        minPtr--; 
    }
    int top() {
        return stack[topPtr]; 
    }
    int getMin() {
        return minStack[minPtr]; 
    }
    bool isEmpty() {
        return count == 0; 
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */