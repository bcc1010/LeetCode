class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        for (int i = 0; i < nums.size(); i++) {
            int cmpl = target - nums[i];
            if (numMap.count(cmpl)) {
                return {numMap[cmpl], i};
            }
            numMap[nums[i]] = i;
        }
        return {};
    }
};