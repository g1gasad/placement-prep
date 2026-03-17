#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        int i, j, k;
        i=j=k=0;
        while(j<=n-m){
            if(k==m-1) return i;
            if(haystack[j]==needle[k]){
                j++; k++;
            }
            else{
                i++; j=i;
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;
    string haystack="leetcode";
    string needle = "leeto";
    int ans = sol.strStr(haystack, needle);
    cout << "first occur is at: " << ans << endl;

    return 0;
}