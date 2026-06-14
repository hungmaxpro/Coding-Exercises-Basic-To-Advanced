class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> a;
        for (string i : strs) {
            string temp = i;
            sort(i.begin(), i.end());
            a[i].push_back(temp);
        }
        vector<vector<string>> ans;
        for (auto const& i : a) {
            ans.push_back(i.second);
        }
        return ans;
    }
};
