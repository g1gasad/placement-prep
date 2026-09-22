#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    char kthCharacter(int k) {
        string s="a";
        if(k==1) return s[0];

        while(s.size() <= k){
            string x="";
            for(char ch:s){
                if(ch=='z') x+='a';
                else x += (ch+1);
            }
            s+=x;
        }
        return s[k-1];
    }
};
int main() {
    Solution sol;
    int k=10;
    char ans=sol.kthCharacter(k);
    cout << ans << endl;
    return 0;
}