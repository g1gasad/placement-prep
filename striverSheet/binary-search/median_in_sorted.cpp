#include <bits/stdc++.h>
using namespace std;
int medianSortedMatrix(vector<vector<int>> &matrix){
    vector<int> arr;
    int rows=matrix.size();
    int cols=matrix[0].size();
    int n = rows * cols;
    for(int r=0; r<rows; r++){
        for(int c=0; c<cols; c++){
            arr.push_back(matrix[r][c]);
        }
    }
    sort(arr.begin(), arr.end());
    return arr[n/2];
}
int main() {
    vector<vector<int>> matrix = {
                                {1, 5, 7, 9, 11}, 
                                {2, 3, 4, 5, 10},
                                {9, 10, 12, 14, 16}
                            };
    int ans = medianSortedMatrix(matrix);
    cout << ans;
    return 0;
}