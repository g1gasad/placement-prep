#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n=s.size();
        vector<int> cPosn={INT_MAX};
        vector<int> result;
        for(int i=0; i<n; i++) if(s[i]==c) cPosn.push_back(i);
        cPosn.push_back(i);
        int j=0;
        for(int i=0; i<n; i++){
            if(s[i]==c) result.push_back(0);
            if(i<cPosn[j]) {
                
            }
        return result;
    }
};
int main() {
    Solution sol;
    string s="loveleetcode"; char c='e';
    vector<int> ans=sol.shortestToChar(s, c);
    for(auto p:ans) cout << p << " ";
    return 0;
}