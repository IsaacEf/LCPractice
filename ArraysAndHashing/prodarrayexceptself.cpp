class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> final;
        for(int i = 0; i < nums.size(); i++){
            int res = 1;
            for(int j = 0; j < nums.size(); j++){
                if(i != j){
                    res *= nums[j];
                }
            }
            final.push_back(res);
        }
        return final;
    }
};
