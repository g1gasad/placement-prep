#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m=mat.size();
        int n=mat[0].size();
        if(m*n != r*c) return mat;
        vector<vector<int>> result(r, vector<int> (c, 0));
        int i=0;
        for(int row=0; row<m; row++){
            for(int col=0; col<n; col++){
                result[i/c][i%c]=mat[row][col];
                i++;
            }
        }
        return result;
    }
};
int main() {
    Solution sol;
    vector<vector<int>> mat={{1, 2}, {3, 4}, {3, 3}};
    int r=2, c=3;
    vector<vector<int>> ans=sol.matrixReshape(mat, r, c);
    for(int x=0; x<r; x++){
        for(int y=0; y<c; y++){
            cout << ans[x][y] << " ";
        }
        cout << endl;
    }
    return 0;
}