#include <bits/stdc++.h>
using namespace std;
int bs1D(vector<int> &singleRow, int &x){
    int n=singleRow.size();
    int low=0;
    int high=n-1;
    while(low <= high){
        int mid=(low+high)/2;
        if(singleRow[mid]==x) return mid;
        else if(singleRow[mid]>x) high=mid-1;
        else low=mid+1;
    }
    return -1;
}
pair<int, int> bs2D(vector<vector<int>> &mat, int &x){
    int rows=mat.size();
    int cols=mat[0].size();
    int rowIdx=-1;
    int colIdx=-1;
    for(int r=0; r<rows; r++){
        if(x>=mat[r][0] && x<=mat[r][cols-1]){
            rowIdx=r;
            colIdx=bs1D(mat[r], x);
        }
    }
    if(colIdx==-1) return {-1, -1};
    return {rowIdx, colIdx};
}
int main() {
    vector<vector<int>> mat= { 
    {1, 2, 3, 4}, 
    {5, 6, 7, 9}, 
    {9, 10, 11, 12} 
    };
    int target=8;
    pair<int, int> ans=bs2D(mat, target);
    printf("%d is at (%d, %d)", target, ans.first, ans.second);
    return 0;
}