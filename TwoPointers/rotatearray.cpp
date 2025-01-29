class Solution {
public:
    void rotate(std::vector<int>& nums, int k) {
        k = k % nums.size(); 
        
        reverse(nums.begin(), nums.end());

        //reverses 1st & 2nd Half of the array
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
