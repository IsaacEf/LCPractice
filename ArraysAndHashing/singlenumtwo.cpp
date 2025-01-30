class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res;
        map<int,int> fq;
        for(int  i = 0; i < nums.size(); i++){
            fq[nums[i]]++;
        }
        for(auto pair: fq){
            if(pair.second != 3){
                res = pair.first;
            }
        }
        return res;
    }
};
