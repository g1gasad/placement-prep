#include <bits/stdc++.h>
using namespace std;
string minWindow(string s, string t){
    if(s==t) return s;
    int n=s.size(), m=t.size();
    if(m>n) return "";
    
    string result;
    int l=0, r=0, cnt=0, startIdx=-1, minLen=INT_MAX;
    int hash[256]={0};
    for(int i=0; i<m; i++) hash[t[i]]++;
    
    while(r < n){
        if(hash[s[r]] > 0){
            cnt++;
        };
        hash[s[r]]--;
        while(cnt==m){
            if(r-l+1 < minLen){
                minLen=r-l+1;
                startIdx=l;
            }
            hash[s[l]]++;
            if(hash[s[l]] > 0) cnt--;
            l++;
        }
        r++;
    }
    if(startIdx==-1) return "";
    result=s.substr(startIdx, minLen);
    return result;
}
int main() {
    string s="Ababa";
    string t="ab";
    string ans=minWindow(s, t);
    cout << "min substr: " << ans << endl; 
    return 0;
}