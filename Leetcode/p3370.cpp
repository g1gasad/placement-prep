#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int smallestNumber(int n) {
        int cnt=0;
        int nearPowof2=1;
        int output;
        while(n){
            cnt++;
            n=n>>1;
        }
        nearPowof2=nearPowof2 << cnt;
        output = nearPowof2-1;
        return output;
    }
};
int main() {
    int n=3;
    Solution sol;
    int ans = sol.smallestNumber(n);
    cout << ans;
    return 0;
}