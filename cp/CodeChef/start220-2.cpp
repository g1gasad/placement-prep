#include <bits/stdc++.h>
using namespace std;
string task(int &n, string &str){
    int hash[26]={0};
    int i=0;
    while(i<n){
        hash[str[i]-'a']++;
        i++;
    }
    for(int j=0; j<26; j++){
        if(hash[j]==2) return "Yes";
    }
    return "No";
}
int main() {
    int n;
    string str;
    // cin >> n;
    // cin >> str;
    n=6;
    str = "proved";
    string ans = task(n, str);
    cout << ans;
    return 0;
}