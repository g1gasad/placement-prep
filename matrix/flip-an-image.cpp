#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m=image.size();
        int n=image[0].size();
        vector<vector<int>> invertedImage;
        for(int r=0; r<m; r++){
            vector<int> invertedRow(m);
            for(int c=0; c<n; c++){
                if(image[r][n-c-1]==1) invertedRow[c]=0;
                else invertedRow[c]=1;
            }
            invertedImage.push_back(invertedRow);
        }
        return invertedImage;
    }
};
int main() {
    Solution sol;
    vector<vector<int>> image={{1,0,1}, {0,0,1}, {0,1,1}};
    vector<vector<int>> ans=sol.flipAndInvertImage(image);
    for(int i=0; i<ans.size(); i++){
        cout << "[ ";
        for(int j=0; j<ans[0].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}