#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix){
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> arr;
        int leftB=0, bottomB=m, topB=0, rightB=n;
        while(leftB<rightB && topB<bottomB){
            for(int i=leftB; i<rightB; i++){
                arr.push_back(matrix[topB][i]);
            }
            topB++;

            for(int i=topB; i<bottomB; i++){
                arr.push_back(matrix[i][rightB-1]);
            }
            rightB--;

            if(!(leftB<rightB && topB<bottomB)) break;
            
            for(int i=rightB-1; i>=leftB; i--){
                arr.push_back(matrix[bottomB-1][i]);
            }
            bottomB--;

            for(int i=bottomB-1; i>=topB; i--){
                arr.push_back(matrix[i][leftB]);
            }
            leftB++;
        }
        return arr;
    }
};  
int main() {
    Solution sol;
    vector<vector<int>> matrix = {{1,2},{4,5}};
    vector<int> result = sol.spiralOrder(matrix);
    for(int i : result) {
        cout << i << " ";
    }
    return 0;
}