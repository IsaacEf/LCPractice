class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> res(nums.begin(), nums.end());
        
        int l = 0;
        for(int num: res){
            nums[l++] = num;
        }
        return res.size();
    }
};
