class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> a;
        for (int i = 0; i < nums.size(); i++) {
            if (!a.count(nums[i])) {
                a.insert({ nums[i], 1 });
            }
            else {
                a[nums[i]]++;
            }
        }
        vector<pair<int, int>> ans(a.begin(), a.end());
        sort(ans.begin(), ans.end(),
            [](pair<int, int>& a, pair<int, int>& b) { return a.second > b.second; });
        vector<int> kq;
        for (int i = 0;i < k;i++) {
            kq.push_back(ans[i].first);
        }
        return kq;
    }
};
