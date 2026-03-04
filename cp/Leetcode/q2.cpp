#include <bits/stdc++.h>
using namespace std;
void displayGrid(vector<vector<int>> &grid){
    int n=grid.size();
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "enter grid dim: ";
    cin >> n;
    vector<vector<int>> grid;
    for(int i=0; i<n; i++){
        vector<int> row;
        for(int j=0; j<n; j++){
            int x; cin >> x;
            row.push_back(x);
        }
        grid.push_back(row);
    }
    displayGrid(grid);
    return 0;
}