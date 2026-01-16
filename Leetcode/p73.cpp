#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    void markRows(vector<vector<int>> &matrix, int rows, int cnum)
    {
        for (int r = 0; r < rows; r++)
        {
            if (matrix[r][cnum] != 0)
                matrix[r][cnum] = -1;
        }
    };
    void markCols(vector<vector<int>> &matrix, int cols, int rnum)
    {
        for (int c = 0; c < cols; c++)
        {
            if (matrix[rnum][c] != 0)
                matrix[rnum][c] = -1;
        }
    };

public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                int val = matrix[i][j];
                if (val == 0)
                {
                    markRows(matrix, rows, j);
                    markCols(matrix, cols, i);
                }
            }
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (matrix[i][j] == -1)
                    matrix[i][j] = 0;
            }
        }
    }
};
int main()
{
    vector<vector<int>> matrix = {{1, 1, 1, 0},
                                  {1, 0, 1, 1},
                                  {1, 1, 1, 1}};
    Solution sol;
    sol.setZeroes(matrix);
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}