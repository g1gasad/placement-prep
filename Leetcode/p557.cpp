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
    string reverseWords(string s) {
        int n=s.size();
        if(n==1) return s;
        int i=0, j=1;
        while(j<=n){
            if(s[j]==' ' || s[j]=='\0'){
                reverseStr(s, i, j-1);
                i=j+1;        
            }
            j++;
        }
        return s;
    }
};

int main() {
    Solution sol;
    string sentence="Ding";
    string ans=sol.reverseWords(sentence);
    cout << ans;
    return 0;
}