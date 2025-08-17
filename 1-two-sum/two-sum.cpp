class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            int subtraction = target - nums[i];
            if (hash.find(subtraction) != hash.end() && hash[subtraction] != i) {
                return {i, hash[subtraction]};
            }
            hash[nums[i]] = i;
        }
        return {-1};
    }
};