#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void reverseStr(string &s, int l, int r){
        while(l<r){
            char temp=s[l];
            s[l]=s[r];
            s[r]=temp;
            l++; r--;
        }
    }
    string reverseStr(string s, int k) {
        int n=s.size();
        if(n==1) return s;
        if(k>n){
            reverseStr(s, 0, n-1);
            return s;
        }
        int i=0, j=0;
        while(j<n){
            if(j-i+1 == 2*k){
                // cout << s << endl << endl;
                reverseStr(s, i, i+k-1);
                i=j+1;
            }
            j++;
        }
        if(j-i>k && j-i<2*k) reverseStr(s, i, i+k-1);
        else reverseStr(s, i, j-1);
        return s;
    }
};
int main() {
    Solution sol;
    string s="krmyfshbspcgtesxnnljhfursyissjnsocgdhgfxubewllxzqhpasguvlrxtkgatzfybprfmmfithphckksnvjkcvnsqgsgosfxc";
    int k=20;
    string ans=sol.reverseStr(s, k);
    cout << ans;
    return 0;
}