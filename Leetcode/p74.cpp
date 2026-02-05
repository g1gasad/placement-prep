#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int low=0; int high= rows*cols - 1;
        while(low <= high){
            int mid=(low+high)/2;
            int r=mid/cols; int c=mid%cols;
            if(matrix[r][c] == target){
                return true;
            }
            else if(matrix[r][c] > target) high=mid-1;
            else low=mid+1;
        }    
        return false;
    }
};
int main() {
    vector<vector<int>> mat= { 
    {1, 2, 3, 4}, 
    {5, 6, 7, 9}, 
    {9, 10, 11, 12} 
    };
    int target=8;
    Solution sol;
    bool ans=sol.searchMatrix(mat, target);
    // printf("%d is at (%d, %d)", target, ans.first, ans.second);
    if(ans) cout << "yep";
    else cout << "nope";
    return 0;
}