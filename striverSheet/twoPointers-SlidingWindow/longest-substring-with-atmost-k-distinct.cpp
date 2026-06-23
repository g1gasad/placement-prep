#include <bits/stdc++.h>
using namespace std;
// string longestWindow(int k, string &str){
int kDistinctChars(int k, string &str){
    int n=str.size();
    int l=0, r=0;
    if(n==0 || k==0) return 0;
    //  startIdx=-1;
    int maxLen=0;
    unordered_map<char, int> mpp;
    
    while(r<n){
        mpp[str[r]]++;
        while(mpp.size()>k){
            mpp[str[l]]--;
            if(mpp[str[l]]==0) mpp.erase(str[l]);
            l++;
        }
        if(r-l+1 > maxLen){
            maxLen=r-l+1;
            // startIdx=l;
        }
        r++;
    }
    // if(startIdx==-1) return "";
    // return str.substr(startIdx, maxLen);
    return maxLen;
}
int main() {
    vector<string> s={"abbbbbbc", "absabbabababas",
                    "aaaaaaaaaa", "abcdefg"};
    int k=2;
    for(int i=0; i<s.size(); i++){
        int ans=kDistinctChars(k, s[i]);
        cout << s[i] << ": " << ans << endl;
    }
    return 0;
}