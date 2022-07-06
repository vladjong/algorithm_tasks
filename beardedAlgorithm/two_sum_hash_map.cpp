class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hashMap;
        for (int i = 0; i < nums.size(); i++) {
            auto it = hashMap.find(target - nums[i]);
            if (it != hashMap.end()) {
                return {it->second, i};
            }
            hashMap[nums[i]] = i;
        }
        throw std::invalid_argument("Amount not found");
    }
};
