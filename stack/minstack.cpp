class MinStack {
private:
    stack<int> s;
    stack<int> s2;
public:
    MinStack() {
    }
    
    void push(int val) {
        s.push(val);
        if(s2.empty() || val < s2.top()){
            s2.push(val);
        }else{
            s2.push(s2.top());
        }
    }
    
    void pop() {
        s.pop();
        s2.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return s2.top();
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
