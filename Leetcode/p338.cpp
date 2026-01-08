#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> onesCount(n+1);
        for(int i=0; i<=n; i++){
            int num=i;
            int cnt=0;
            // cout<< n;
            while(num){
                cnt += (num & 1);
                num = num >> 1;
            }
            onesCount[i]=cnt;
        }
        return onesCount;
    }
};
int main() {
    int n=5;
    Solution sol;
    vector<int> ans = sol.countBits(n);
    for(auto it:ans) cout << it << " ";
    return 0;
}