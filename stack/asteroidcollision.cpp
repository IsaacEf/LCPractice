class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stck;
       
        for(int i = 0; i < asteroids.size(); i++){
            bool flag = false;
            while(!stck.empty() && asteroids[i] < 0 && stck.top() > 0){
                if (abs(stck.top()) < abs(asteroids[i])) {
                    stck.pop();
                    continue;
                } else if (abs(stck.top()) == abs(asteroids[i])) {
                    stck.pop();
                }
                flag = true;  
                break; 
                
            } 
            if(!flag){
                stck.push(asteroids[i]); 
            }
            
        }
        vector<int> res;
        while (!stck.empty()){
            res.push_back(stck.top());
            stck.pop();
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
              
            
               
                
                
        
