#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n=s.size();
        unordered_map<char, pair<int, int>> mpp;
        vector<int> result;
        for(int i=0; i<n; i++){
            if(mpp.find(s[i])==mpp.end()){
                mpp[s[i]].first=i;
                mpp[s[i]].second=i;
            }
            else mpp[s[i]].second=i;
        }
        for(auto x : mpp){
        //     printf("%c : %d - %d\n", x.first, x.second.first, x.second.second);
            int start=x.second.first;
            int end=x.second.second;
            
        }
        return {2, 1};
    }
};
int main() {
    Solution sol;
    string s="ababcc";
    vector<int> ans=sol.partitionLabels(s);
    for(int x:ans) cout << x << " ";
    return 0;
}