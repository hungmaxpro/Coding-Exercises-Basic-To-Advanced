class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        unordered_set<int> ans;
        int kq = ans.size();
        while (r < s.size()) {
            if (!ans.count(s[r])) {
                ans.insert(s[r]);
                r++;
                if (ans.size() > kq) {
                    kq = ans.size();
                }
            }
            else {
                while (ans.count(s[r])) {
                    ans.erase(s[l]);
                    l++;
                }
                if (ans.size() > kq) {
                    kq = ans.size();
                }
            }
        }
        return kq;
    }
};
