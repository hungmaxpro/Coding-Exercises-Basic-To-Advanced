class Solution {
   public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(), piles.end());
        int kq = 0;
        while (l <= r) {
            int m = (l + r) / 2;
            long long sum = 0;
            for (int i : piles) {
                sum += (i + m - 1) / m;
            }
            if (sum <= h) {
                kq = m;
                r = m - 1;
            } else {
                l = m + 1;
            }
        }
        return kq;
    }
};
