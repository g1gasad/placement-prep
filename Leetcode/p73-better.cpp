#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    void setZeroes(vector<vector<int>> &m){
        int rows=m.size();
        int cols=m[0].size();
        set<int> rowstoZero, colstoZero;
        for(int r=0; r<rows; r++){
            for(int c=0; c<cols; c++){
                if(m[r][c]==0){
                    rowstoZero.insert(r);
                    colstoZero.insert(c);
                }
            }
        }
        for(int rval:rowstoZero){
            for(int c=0; c<cols; c++){
                m[rval][c]=0;
            }
        }
        for(int cval:colstoZero){
            for(int r=0; r<rows; r++){
                m[r][cval]=0;
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