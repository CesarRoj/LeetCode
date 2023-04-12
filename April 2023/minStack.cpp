class MinStack {
public:

    stack<int> mystack;
    int minVal= 2147483647;
    MinStack() {
    }
    
    void push(int val) {
        
        if(val <= minVal){
            mystack.push(minVal);
            minVal = val;
            
        }
        mystack.push(val);
    }
    
    void pop() {
        if(minVal == mystack.top() && !mystack.empty()){
            mystack.pop();
            minVal = mystack.top();
        }
        return mystack.pop();
    }
    
    int top() {
        return mystack.top();
    }
    
    int getMin() {
        return minVal;
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