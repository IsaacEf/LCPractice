class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int maxCounter = 1; 
        int counter = 1;

        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i + 1] == nums[i] + 1){
                counter++;
            }
            else{
                if(counter > maxCounter){
                    maxCounter = counter;
                }
                counter = 1; 
            }
        }
        if(counter > maxCounter){
            maxCounter = counter;
        }
        return maxCounter;
    }
};
