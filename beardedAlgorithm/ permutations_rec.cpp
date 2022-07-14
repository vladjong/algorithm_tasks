class Solution {
public:
    
    void permute(vector<vector<int>>& result, vector<int>& subset, const vector<int>& nums) {
        if (subset.size() == nums.size()) {
            result.push_back(subset);
        } else {
            for (auto &element : nums) {
                if (find(subset.begin(), subset.end(), element) != subset.end()) {
                    continue;
                }
                subset.push_back(element);
                permute(result, subset, nums);
                subset.pop_back();
            }
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;
        permute(result, subset, nums);
        return result;
    }
};
