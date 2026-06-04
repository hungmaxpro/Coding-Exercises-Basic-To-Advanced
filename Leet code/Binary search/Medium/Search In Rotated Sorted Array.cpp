class Solution {
   public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        if (nums[r] < nums[l]) {
            while (l <= r) {
                int m = (l + r) / 2;
                int t = target;
                int nm = nums[m];
                int nr = nums[r];
                if (nm == t) {
                    return m;
                } else if ((t < nm && nm < nr) || (nr < t && t < nm) || (nm < nr && nr < t)) {
                    r = m - 1;
                } else {
                    l = m + 1;
                }
                
            }
        } else {
            while (l <= r) {
                int m = (l + r) / 2;
                int t = target;
                int nm = nums[m];
                int nr = nums[r];
                if (nm == t) {
                    return m;
                } else if (t < nm) {
                    r = m - 1;
                } else {
                    l = m + 1;
                }
            
            }
        }
        return -1;
    }
};
