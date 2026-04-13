#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseWords(string &s) {
        int n=s.size();
        if(n==1) return s;

        string outputStr="";
        int l=0;
        while(s[l]==' ') l++;
        while(s[n-1]==' ') n--;
        int r=l;
        string word="";
        while(r<=n){
            if(s[r]!=' ') word += s[r];

            if((s[r]==' ' && s[r+1]!=' ') || (s[r]=='\0')){
                outputStr = word + ' ' + outputStr;
                word="";
            }
            r++;
        }
        return outputStr;
    }
};
int main() {
    Solution sol;
    vector<string> s={"the sky is blue", "  hello world  ", "a good   example"};
    for(int i=0; i<s.size(); i++){
        string ans=sol.reverseWords(s[i]);
        // printf("%s -> %s\n", s[i], ans);
        cout << s[i] << " -> " << ans << endl;
    }
    return 0;
}