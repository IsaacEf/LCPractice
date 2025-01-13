class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       map<int,int> freq;
       bool flag;
       for(int i = 0; i < nums.size(); i++){
         freq[nums[i]]++;
       }
       for(auto pair: freq){
         if (pair.second > 1){
            return true;
         }
       }
       return false;
    }
};
