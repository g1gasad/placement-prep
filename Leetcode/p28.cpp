#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        int i=0, j=0;
        int first=-1;
        while(i<n){
            if(haystack[i]==needle[j]){
                if(haystack[i]==needle[0]){
                    first=i;
                    j++;
                }
            }
            else if(j==m) return first;
            else{
                j=0;
            }
            i++;
        }
        return first;
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