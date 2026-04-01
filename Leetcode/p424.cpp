#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int l=0, r=0, maxLen=0, maxFreq=0;
        unordered_map<char, int> mpp;

        while(r<n){
            mpp[s[r]]++;
            maxFreq = max(maxFreq, mpp[s[r]]);

            while(r-l+1 - maxFreq > k){
                mpp[s[l]]--;
                if(mpp[s[l]]==0) mpp.erase(s[l]);
                l++;
            }

            maxLen=max(maxLen, r-l+1);

            r++;
        }
        return maxLen;
    }
};
int main() {
    string s = "AABABBA";
    int k = 1;
    Solution sol;
    int ans = sol.characterReplacement(s, k);
    cout << "max len: " << ans << endl;

    return 0;
}