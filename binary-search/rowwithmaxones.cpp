#include <bits/stdc++.h>
using namespace std;

int numofOnes(vector<int> &arr){
    int n=arr.size();
    int idx=-1;
    int low=0; int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==1){
            idx=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    if(idx==-1) return 0;
    return n-idx;
}
int rowWithMaxOnes(vector<vector<int>> &mat){
    int maxOnes=-1;
    int rowIdx=-1;
    int rows=mat.size();
    int cols=mat[0].size();
    for(int r=0; r<rows; r++){
        int onesInRow=numofOnes(mat[r]);
        // printf("row %d --- %d\n", r, onesInRow);
        if(onesInRow>maxOnes) {
            rowIdx=r;
            maxOnes=onesInRow;
        }
    }
    return rowIdx;
}
int main() {
    vector<vector<int>> mat={
                            {0, 0, 0, 1, 1},
                            {0, 0, 0, 0, 0},
                            {0, 0, 0, 1, 1}
                        };
    int ans=rowWithMaxOnes(mat);
    cout << ans;
    return 0;
}