#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>> output;
        for(int i=0; i<n; i++){
            int arr[26]={0};
            int wordsize=strs[i].size();
            
        }
    }
};
int main() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    Solution sol;
    vector<vector<string>> ans = sol.groupAnagrams(strs);
    for(auto groups : ans){
        for(auto word : groups) cout << "[ " << word << " ]" << endl;
    }
    return 0;
}