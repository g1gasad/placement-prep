#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
// sub int for char (->, <-) and check does it work
        vector<vector<int>> matrix(n, vector<int> (n, 0));
        vector<int> resultArr;
        int x=0;
        int leftB=0, bottomB=n, topB=0, rightB=n;
        while(leftB<rightB && topB<bottomB){
            // cout << x << " ";
            
            for(int i=leftB; i<rightB; i++){
                x++;
                matrix[topB][i]=x;
            }
            topB++;
            for(int i=topB; i<bottomB; i++){
                x++;
                matrix[i][rightB-1]=x;
            }
            rightB--;

            if(!(leftB<rightB && topB<bottomB)) break;
            
            for(int i=rightB-1; i>=leftB; i--){
                x++;
                matrix[bottomB-1][i]=x;
            }
            bottomB--;

            for(int i=bottomB-1; i>=topB; i--){
                x++;
                matrix[i][leftB]=x;
            }
            leftB++;
        }
        return matrix;
    }
};  
int main() {
    Solution sol;
    vector<vector<int>> result = sol.generateMatrix(3);
    for(vector<int> row : result) {
        for(int x : row){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}