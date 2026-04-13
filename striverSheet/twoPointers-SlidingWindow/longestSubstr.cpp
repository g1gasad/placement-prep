#include <bits/stdc++.h>
using namespace std;

int longestSubStr(string &str){
    int n=str.size();
    map<char, int> mpp;
    int maxLen=0;
    int left=0, right=0;
    while(right<n){
        char ch=str[right];
        if(mpp[ch]==0){
            maxLen=max(maxLen, right-left+1);        
        }
        else left = mpp[ch]+1;

        mpp[ch]=right;
        right++;
    }
    return maxLen;
}

int main() {
    string str="abcddabacdswertyui";
    int ans=longestSubStr(str);
    cout << ans << endl;
    return 0;
}