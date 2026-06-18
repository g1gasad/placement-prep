#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle==haystack) return 0;
        int n=needle.size();
        int h=haystack.size();
        if(n>h) return -1;

        char ch=needle[0];
        int i=0;
        while(i<=h-n){
            int k=0;
            int j=i;
            while(needle[k]==haystack[j] && k<n && j<h){
                k++; j++;
            }
  
            if(k==n) return i;
            i++;
        }
        return -1;
    }
};

int main() {
    Solution sol;
    string haystack="truexmebutxmenare";
    string needle = "xmens";
    int ans = sol.strStr(haystack, needle);
    cout << "first occur is at: " << ans << endl;

    return 0;
}