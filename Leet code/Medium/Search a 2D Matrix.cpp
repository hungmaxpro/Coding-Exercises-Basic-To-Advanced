class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int a=0;
        while (a<matrix.size()){
            int l,r;
            l=0;
            r=matrix[a].back();
            while (l <= r) {
                int m=(l+r)/2;
                if (matrix[a][m]==target){
                    return true;
                }
                else if (matrix[a][m]<target){
                    l=m+1;
                }
                else if (matrix[a][m]>target){
                    r=m-1;
                }
                    
            }
            a++;
        }
        return false;
    }
};
