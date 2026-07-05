#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> createGrid(int m, int n) {
        if(m==1 && n==1) return {"."};

        vector<string> path;
        for(int r=0; r<m; r++){
            string s="";
            for(int c=0; c<n; c++){
                if(r==0) s.append(".");
                else if(c==n-1) s.append(".");
                else s.append("#");
            }
            path.push_back(s);
        }
        return path;
    }
};
int main() {
    Solution sol;
    int m=1, n=19;
    vector<string> ans=sol.createGrid(m, n);
    for(auto it:ans) cout << it << endl;
    return 0;
}