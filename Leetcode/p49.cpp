#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>> output;
        int arr[n][26]={0};
        for(int i=0; i<n; i++){
            int wordsize=strs[i].size();
            for(int j=0; j<wordsize; j++){
                char ch=strs[i][j];
                arr[i][ch-'a']++;
            }
        }
        for(int i=0; i<n; i++){
            for(int k=i+1; k<n; k++){
                for(int j=0; j<26; j++){
                    if(arr[i][j]!=arr[k][j])
                }
            }
        }
    }
};
int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    Solution sol;
    vector<vector<string>> ans = sol.groupAnagrams(strs);
    for(auto it : ans){
        for(auto word : it) cout << "[ " << word << " ]" << endl;
    }
    return 0;
}