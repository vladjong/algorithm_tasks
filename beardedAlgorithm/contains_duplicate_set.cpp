class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> mySet;
        for (auto &it: nums) {
            auto itSet = mySet.insert(it);
            if (!itSet.second) {
                return true;
            }
        }
        return false;
    }
};
