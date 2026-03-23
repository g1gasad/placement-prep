#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sLen=s.size();
        int tLen=t.size();
        if(sLen==0 && tLen==0) return true;

        int p1=0; int p2=0;
        while(p2<tLen){
            if(s[p1]==t[p2]) p1++;
            if(p1==sLen) return true;
            p2++;
        }
        return false;
    }
};
int main() {
    Solution sol;
    vector<string> ss={"abc", "axc", "b"};
    vector<string> ts={"ahbgdc", "ahbgdc", "ahbgdc"};
    for(int i=0; i<ss.size(); i++){
        int ans=sol.isSubsequence(ss[i], ts[i]);
        if(ans) printf("%s in %s | True\n", ss[i], ts[i]);
        else printf("%s in %s | False\n", ss[i], ts[i]);
    }
    return 0;
}