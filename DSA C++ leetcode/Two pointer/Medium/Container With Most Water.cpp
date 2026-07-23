class Solution {
   public:
    int maxArea(vector<int>& heights) {
        // Hướng giải thanh nào thấp hơn thì dịch thay ấy
        int l = 0;
        int r = heights.size() - 1;
        int ans;
        if (heights[l] < heights[r]) {
            ans = heights[l] * (r - l);
        } else {
            ans = heights[r] * (r - l);
        }

        while (l < r) {
            if (heights[l] < heights[r]) {
                l++;
            }

            else {
                r--;
            }

            if (heights[l] < heights[r]) {
                if (heights[l] * (r - l) > ans) {
                    ans = heights[l] * (r - l);
                }
            } else {
                if (heights[r] * (r - l) > ans) {
                    ans = heights[r] * (r - l);
                }
            }
        }
        return ans;
    }
};
