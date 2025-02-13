class Solution {
public:
    bool helper(vector<int>& nums, int k){
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < k){
                return false;
            }
        }
        return true;
    }

    int minOperations(vector<int>& nums, int k) {
        int counter = 0;
        while(!(helper(nums,k))){
            if (nums.size() < 2) {
                return -1;
            }
            counter++;
            int min = *min_element(nums.begin(), nums.end());
            nums.erase(find(nums.begin(), nums.end(), min));
            int min2 = *min_element(nums.begin(), nums.end());
            nums.erase(find(nums.begin(), nums.end(), min2));
            
            nums.push_back(min * 2 + min2);

        }
        return counter;
    }
};
