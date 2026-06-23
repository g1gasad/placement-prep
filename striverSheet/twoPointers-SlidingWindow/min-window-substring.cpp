#include <bits/stdc++.h>
using namespace std;
string minSubString(string &s, string &t){
    string result;
    int n=s.size();
    int m=t.size();
    int minLen=INT_MAX;
    int startIdx=-1;
    for(int i=0; i<n; i++){
        int hash[26]={0};
        int cnt=0;
        for(int j=0; j<m; j++){
            hash[t[j]-'a']++;
            // cout<< t[j] << "==";
        }
        for(int k=i; k<n; k++){
            if(hash[s[k]-'a']>0){
                cnt++;
            }
            hash[s[k]-'a']--;
            if(cnt==m){
                if(k-i+1 < minLen){
                    minLen = k-i+1;
                    startIdx=i;
                    break;
                }
            }
        }
        // cout<< endl;
    }
    if(startIdx==-1) return "";
    result=s.substr(startIdx, minLen);
    return result;
}
int main() {
    string s="cddaaabba";
    string t="abc";
    string ans=minSubString(s, t);
    cout << "min substr: " << ans << endl; 
    return 0;
}