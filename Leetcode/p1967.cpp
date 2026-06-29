#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int n=patterns.size();
        int m=word.size();
        int count=0;
        for(int i=0; i<n; i++){
            string str=patterns[i];
            int strLen=str.size();
            if(strLen>m) continue;
            for(int j=0; j<m-strLen+1; j++){
                if(str==word.substr(j, strLen)){
                    ++count;
                    break;
                }
            }
        }
        return count;
    }
};
int main() {
    Solution sol;
    vector<string> patterns={"dgvyb","j","rc","b","gve","rkbzd","i","ial","tws","c","z"};
    string word="zcobp";
    int ans = sol.numOfStrings(patterns, word);
    cout << ans;
    return 0;
}