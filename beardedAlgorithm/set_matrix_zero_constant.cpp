class Solution
{
public:
  void setZeroes(vector<vector<int>>& matrix) {
    bool fCol = false;
    bool fRow = false;
    int i, j;
    for(i = 0; i < matrix.size(); i++)
      if(matrix[i][0] == 0)
      {
        fCol = true;
        break;
      }
    for(i = 0; i < matrix[0].size(); i++)
      if(matrix[0][i] == 0)
      {
        fRow = true;
        break;
      }
    for(i = 1; i < matrix.size(); i++)
    for(j = 1; j < matrix[0].size(); j++)
      if(matrix[i][j] == 0)
      {
        matrix[i][0] = 0;
        matrix[0][j] = 0;
      }
    for(i = 1; i < matrix.size(); i++)
    for(j = 1; j < matrix[0].size(); j++)
      if(matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
    if(fCol)
      for(i = 0; i < matrix.size(); i++)
        matrix[i][0] = 0;
    if(fRow)
      for(i = 0; i < matrix[0].size(); i++)
        matrix[0][i] = 0;
  }
};
