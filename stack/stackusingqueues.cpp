class MyStack {
private:
    queue<int> q;
    queue<int> q2;
public:
    MyStack() {   }
    void push(int x) {
        q.swap(q2);
        q.push(x);

        while(!(q2.empty())){
            q.push(q2.front());
            q2.pop();

        }
    }
    
    int pop() {
        int res = q.front();
        q.pop();
        return res;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
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
