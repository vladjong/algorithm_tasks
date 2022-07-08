class Solution {
public:
    int maxArea(vector<int>& height) {
        int s = 0;
        for (int i = 0; i < height.size() - 1; i++) {
            for (int j = i + 1; j < height.size(); j++) {
                s = max(s, (j - i) * min(height[i], height[j]));
            }
        }
        return s;
    }
};
