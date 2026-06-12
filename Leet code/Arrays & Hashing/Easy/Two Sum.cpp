class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            int u = target - nums[i];
            if (!hash.count(u)) {
                hash.insert({ nums[i], i });
            }
            else {
                ans.push_back(hash.find(u)->second);
                ans.push_back(i);
            }
        }

        return ans;
    }
};
