class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> fq;
        int res = 0;
        int counter = 0;
        for(int i = 0; i < nums.size(); i++){
            fq[nums[i]]++;
        }
        for(auto pair: fq){
            cout << pair.first << " -> " << pair.second << endl;
            if(pair.second > counter){
                counter = pair.second;
                res = pair.first;
            }
        }
        return res;
    }
};
