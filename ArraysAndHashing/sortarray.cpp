class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        map<int,int> mp;
        vector<int> res;

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }
        for(auto pair: mp){
            for(int i = 0; i < pair.second; i++){
                res.push_back(pair.first);
            }
        }

        return res;
    }
};
