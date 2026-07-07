class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9);
        vector<unordered_set<char>> col(9);
        vector<unordered_set<char>> sq(9);
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char val=board[i][j];

                if (val=='.'){
                    continue;
                }
                else{
                    if (row[j].count(val)||col[i].count(val)||sq[(j/ 3) * 3 + (i / 3)].count(val)){
                        return false;
                    }else{
                        row[j].insert(val);
                        col[i].insert(val);
                        sq[(j/3)*3+(i/3)].insert(val);
                    }
                }
            }
        }
        return true;

    }
};
