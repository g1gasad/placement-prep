#include <bits/stdc++.h>
using namespace std;

string superReducedString(string &s) {
    int n=s.size();
    int j=1;
    int i=0;
    while(j<n){
        if(s[i]!=s[j]){
            s[i+1]=s[j];
            i++;
        }
        j++;
    }
    return s.substr(0, i+1);
}

int main() {
    string str="aaa";
    string ans = superReducedString(str);
    cout << ans;
    return 0;
}