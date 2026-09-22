#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        int n=s.size();
        for(int i=n-2; i>=0; i--) shifts[i] += shifts[i+1];
        for(int i=0; i<n; i++) {
            if(s[i]+(shifts[i]) > 'z'){
                s[i] = 'a'-1+shifts[i]-('z'-ch)    
            }
            
            s[i] += (shifts[i]%26);
        return s;
    }
};
int main() {
    Solution sol;
    string s="ruu";
    vector<int> shifts={26,9,17};
    string ans=sol.shiftingLetters(s, shifts);
    cout << ans << endl;
    // char ch = 'z'; int i=4;
    // ch = 'a'-1+i-('z'-ch);
    // printf("%c - %d\n", ch, ch);
    return 0;
}