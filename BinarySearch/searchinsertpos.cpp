class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int res = nums.size();
        int l = 0;
        int r = nums.size() - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[mid] > target) {
                res = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return res;
    }
};
