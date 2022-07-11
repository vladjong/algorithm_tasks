class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int s = 0;
        while (right >= left) {
            int temp = min(height[left], height[right]);
            s = max(s, (right - left) * temp);
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return s;
    }
};
