class Solution {
public:
    string clearDigits(string s) {
        stack<char> stck;
        stack<char> tStck;
        string res;
        for(int i = 0; i < s.size(); i++){
            if(!(isdigit(s[i]))){
                stck.push(s[i]);
            }else{
                stck.pop();
            }
        }
        while (!stck.empty()) {
            tStck.push(stck.top());
            stck.pop();
        }

        while (!tStck.empty()) {
            res += tStck.top();
            tStck.pop();
        }
        return res;
    }
};
