class MyQueue {

private:
    stack<int> stck1;
    stack<int> stck2;

public:
    MyQueue() {
    }
    void push(int x) {
         stck1.push(x);
    }
    
    int pop() {
        if (stck2.empty()) {
            while (!stck1.empty()) {
                stck2.push(stck1.top());
                stck1.pop();
            }
        }
        int res = stck2.top();
        stck2.pop();
        return res;
    }
    
    int peek() {
        if (stck2.empty()) {
            while (!stck1.empty()) {
                stck2.push(stck1.top());
                stck1.pop();
            }
        }
        return stck2.top();
    }
    
    bool empty() {
        if(stck1.empty() == true && stck2.empty() == true){
            return true;
        }
        return false;
    }
};
