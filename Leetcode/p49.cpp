#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int stringValue(string s){
        int m=s.size();
        if(m==0) return 0;
        int val=0;
        for(int i=0; i<m; i++){
            val += (s[i]-'a'+1);
        }
        return val;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>> output;
        vector<int> stringVals;
        for(int i=0; i<n; i++){
            int val=stringValue(strs[i]);
            stringVals.push_back(val);
        }
        vector<int> seenIdxs;
        for(int j=0; j<n; j++){
            bool seen=false;
            for(int i=0; i<seenIdxs.size(); i++){
                if(j==seenIdxs[i]){
                    seen=true;
                    break;
                }
            }
            if(seen) continue;

            vector<string> group={strs[j]};
            for(int k=j+1; k<n; k++){
                if(stringVals[j]==stringVals[k]){
                    seenIdxs.push_back(k);
                    group.push_back(strs[k]);
                }

            }
            output.push_back(group);
        }
        return output;
    }
};
int main() {
    // vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    vector<string> strs = {""};
    Solution sol;
    vector<vector<string>> ans = sol.groupAnagrams(strs);
    for(auto groups : ans){

        cout << "Group: [ ";
        for(int i=0; i<groups.size(); i++){
            cout << groups[i] << " ";
        }
        cout << "]" << endl;
    }
        return 0;
}