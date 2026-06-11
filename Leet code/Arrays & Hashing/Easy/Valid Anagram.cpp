class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_multiset<char> hash(s.begin(), s.end());
        if (s.size() != t.size()) {
            return false;
        }
        for (char i : t) {
            if (!hash.count(i)) {
                return false;
            }
            else {
                hash.erase(hash.find(i));
            }
        }
        return true;
    }
};
