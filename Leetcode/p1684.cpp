#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n=words.size();
        int hash[26]={0};
        for(int i=0; i<allowed.size(); i++) hash[allowed[i]-'a']++;
        int cnt=0;
        for(int i=0; i<n; i++){
            string word=words[i];
            bool allw=true;
            for(char ch : word){
                if(hash[ch-'a'] == 0){
                    allw=false; break;
                }
            }
            if(allw) cnt++;
        }
        return cnt;
    }
};
int main() {
    Solution sol;
    string allowed="abc";
    vector<string> words={"a","b","c","ab","ac","bc","abc"};
    int ans=sol.countConsistentStrings(allowed, words);
    cout << ans;
    return 0;
}