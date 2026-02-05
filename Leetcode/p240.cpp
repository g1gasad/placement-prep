#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    pair<int, int> searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int r=0;
        int c=matrix[0].size() - 1;
        while(r<rows && c>=0){
            if(matrix[r][c]==target) return {r, c};
            else if(matrix[r][c] > target) c--;
            else r++;
        }
        return {-1, -1};
    }
};
int main() {
    vector<vector<int>> matrix = {
                    {1,4,7,11,15},
                    {2,5,8,12,19},
                    {3,6,9,16,22},
                    {10,13,14,17,24},
                    {18,21,23,26,30}};
    int target = 22;
    Solution sol;
    pair<int, int> ans=sol.searchMatrix(matrix, target);
    printf("%d is at (%d, %d)", target, ans.first, ans.second);
    return 0;
}