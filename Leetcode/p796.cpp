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
    bool rotateString(string s, string goal) {
        int n=s.size();
        if(s==goal) return true;
        if(goal.size()>n) return false;
        for(int i=0; i<n; i++){
            // reverseStr(s, n-1, n-1);
            reverseStr(s, 0, n-2);
            reverseStr(s, 0, n-1);
            if(s==goal) return true;
        }
        return false;
    }
};
int main() {
    Solution sol;
    string s="abcde", goal="cdacb";
    bool ans=sol.rotateString(s, goal);
    if(ans) cout << "yes";
    else cout << "no";
    return 0;
}