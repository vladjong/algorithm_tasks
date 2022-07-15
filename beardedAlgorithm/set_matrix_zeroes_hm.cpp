class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> rowSet;
        set<int> colSet;
        int row = matrix.size();
        int col = matrix[0].size();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (matrix[i][j] == 0) {
                    rowSet.insert(i);
                    colSet.insert(j);
                }
            }
        }
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (rowSet.find(i) != rowSet.end() || colSet.find(j) != colSet.end()) {
                    matrix[i][j] = 0;
                 }
             }
         }
    }
};
