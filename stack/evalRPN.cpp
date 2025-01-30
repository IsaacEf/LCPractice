class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stck;
        for (string ch : tokens) {
            if (ch == "+") {
                int a = stck.top(); 
                stck.pop();
                int b = stck.top(); 
                stck.pop();
                stck.push(b + a);
            } else if (ch == "-") {
                int a = stck.top(); 
                stck.pop();
                int b = stck.top(); 
                stck.pop();
                stck.push(b - a);
            } else if (ch == "*") {
                int a = stck.top(); 
                stck.pop();
                int b = stck.top(); 
                stck.pop();
                stck.push(a * b);
            } else if (ch == "/") {
                int a = stck.top(); 
                stck.pop();
                int b = stck.top(); 
                stck.pop();
                stck.push(b / a);
            } else {
                stck.push(stoi(ch));
            }
        }
        return stck.top();
    }
};
