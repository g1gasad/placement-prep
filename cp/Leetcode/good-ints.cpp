#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long goodIntegers(long long l, long long r, int k) {
        long long count=0;
        while(l<=r){
            long long temp=l;
            vector<long long> digits;
            while(temp){
                digits.push_back(temp%10);
                temp=temp/10;
            }
            bool goodint=true;
            // for(auto it:digits) cout << it << " ";
            for(int i=0; i<digits.size()-1; i++){
                if(abs(digits[i]-digits[i+1]) > k){
                    goodint=false;
                    break;
                }
            }
            if(goodint) count++;
            // cout << endl;
            l++;
        }
        return count;
    }
};
int main() {
    Solution sol;
    vector<long long> params={1, 204530, 8};
    long long l=params[0];
    long long r=params[1];
    long long k=params[2];

    long long ans=sol.goodIntegers(l, r, k);
    cout << ans << endl;
    return 0;
}