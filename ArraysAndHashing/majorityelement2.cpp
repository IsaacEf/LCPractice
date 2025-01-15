class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> fq;
        vector<int> res;
        for(int i = 0; i < nums.size(); i++){
            fq[nums[i]]++;
        }

        for(auto pair: fq){
            if(pair.second > nums.size()/3){
                res.push_back(pair.first);
            }
        }
        return res;
    }
};
