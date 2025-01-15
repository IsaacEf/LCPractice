class Solution {
public:
    void sortColors(vector<int>& nums) {
       int rCount = 0;
       int wCount = 0;
       int bCount = 0;
       for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 0){
            rCount++;
        }else if (nums[i] == 1){
            wCount++;
        }else{
            bCount++;
        }
       }

       for(int i = 0; i < nums.size(); i++){
        if(rCount != 0){
            nums[i] = 0;
            rCount--;
        }else if (wCount != 0){
            nums[i] = 1;
            wCount--;
        }else{
            nums[i] = 2;
            bCount--;
        }
       }

    }
};
