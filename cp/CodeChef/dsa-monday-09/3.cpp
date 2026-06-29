#include <bits/stdc++.h>
using namespace std;
string anagram(vector<string> &strs){
    int n=strs.size();
    int hash[26]={0};
    int common[26]={0};
    for(int i=0; i<strs[0]; i++){
        hash[strs[0]-'a']++;
    }
    for(int i=1; i<n; i++){
        if()
    }
}
int main() {
    // int n;
    // cin >> n;
    // vector<string> strs;
    // for(int i=0; i<n; i++){
    //     cin >> strs[i];
    // }
    vector<string> strs={"remote", "meteor", "term"};
    string ans=anagram(strs);
    cout << ans;
    return 0;
}