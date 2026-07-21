class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int findNumber = target - nums[i];
            if (mp.find(findNumber) != mp.end()) {
                int smallNumber = min(i, mp[findNumber]);
                int largeNumber = max(i,mp[findNumber]);
                return {smallNumber, largeNumber};
            }
            mp[nums[i]] = i;
        }
        return {-1, -1};
    };
};