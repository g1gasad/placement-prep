#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==1) return 1;
        int left=0, right=0, maxLen=0;
        vector<int> hash(256, -1);

        while(right<n){
            if(hash[s[right]] != -1){
                if(hash[s[right]] >= left){
                    left = hash[s[right]] + 1;
                }
            }
            int presentLen = right-left+1;
            maxLen = max(maxLen, presentLen);
            hash[s[right]]=right;
            right++;
        }
        return maxLen;
    }
};
int main() {
    Solution sol;
    string s = "au";
    int ans = sol.lengthOfLongestSubstring(s);
    cout << "length is " << ans << endl;
    return 0;
}