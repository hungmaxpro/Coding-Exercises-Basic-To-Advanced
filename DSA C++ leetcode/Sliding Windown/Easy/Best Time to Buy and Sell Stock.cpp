class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int r = 0;
        int profit = prices[r] - prices[l];
        while (r < prices.size() - 1) {
            if (prices[r] >= prices[l]) {
                r++;
            } else {
                l = r;
            }
            if (prices[r] - prices[l] > profit) {
                profit = prices[r] - prices[l];
            }
        }
        if (profit <= 0) {
            return 0;
        } else {
            return profit;
        }
    }
};
