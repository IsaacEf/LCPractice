class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stck;
        for (const string curr : operations) {
            if(curr == "+"){
                int temp = stck.top();
                stck.pop();
                int temp2 = temp + stck.top();
                stck.push(temp);
                stck.push(temp2);

            }else if(curr == "D"){
                int res = stck.top();
                stck.push(res*2);
            }else if(curr == "C"){
                stck.pop();
            
            }else{
                stck.push(stoi(curr));
            }
        }
        int total = 0;
        while (!stck.empty()) {
            total += stck.top();
            stck.pop();
        }
        return total;
    }
};
