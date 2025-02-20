class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_ = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            max_ = max(max_, (right - left) * min(height[left], height[right]));

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max_;        
    }
};
