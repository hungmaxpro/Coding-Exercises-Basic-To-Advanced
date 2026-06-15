class Solution {
public:
    string encode(vector<string>& strs) {
        string kq;
        for (string i : strs) {
            kq += to_string(i.size()) + '#' + i;
        }
        return kq;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int l = 0, i = 0;

        while (i < s.size()) {
            if (s[i] == '#') {
                int len = stoi(s.substr(l, i - l));
                ans.push_back(s.substr(i + 1, len));
                l = i + len + 1;
                i = l;
            }
            else { i++; }
        }

        return ans;
    }
};
