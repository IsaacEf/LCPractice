class Solution {
public:
    bool isValid(string s) {
       
        stack<char> stck;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                stck.push(s[i]);
            }else{
                if(stck.empty()){
                    return false;
                }
                if(s[i] == ')' && stck.top() != '('
                || s[i] == ']' && stck.top() != '['
                || s[i] == '}' && stck.top() != '{'){
                    return false;
                }
                stck.pop();
            }
            
        }
        return stck.empty();
    }
};
