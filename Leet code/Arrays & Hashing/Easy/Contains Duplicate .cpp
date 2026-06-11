class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hash;
        for (int i : nums) {
            if (!hash.count(i)) {
                hash.insert(i);
            }
            else {
                return true;
            }
        }
        return false;
    }
};