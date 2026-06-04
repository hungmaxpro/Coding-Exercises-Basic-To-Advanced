class Solution {
   public:
    bool isPalindrome(string s) {
        for (int i = 0; i < s.size(); i++) {
            if (!isalnum((unsigned char)s[i])) { 
                s.erase(i,1);
                i--;
            }
        }
        int l = 0;
        int r = s.size() - 1;
        string a, b;
        if (s.size() % 2 == 0) {
            for (int i = 0; i <= (r + l) / 2; i++) {
                a = a + (char)tolower(s[i]);
            }
            for (int i = r; i > (r + l) / 2; i--) {
                b = b + (char)tolower(s[i]);
            }
        } else {
            for (int i = 0; i < (r + l) / 2; i++) {
                a = a + (char)tolower(s[i]);
            }
            for (int i = r; i > (r + l) / 2; i--) {
                b = b + (char)tolower(s[i]);
            }
        }
        if (a == b|| s.size()==0) return true;
        return false;
    }
};