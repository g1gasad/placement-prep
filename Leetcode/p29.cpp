#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor) return 1;
        else if(dividend>=INT_MAX && divisor==1) return INT_MAX;
        else if(dividend>=INT_MAX && divisor==-1) return INT_MIN+1;
        else if(dividend<=INT_MIN && divisor==1) return INT_MIN;
        else if(dividend<=INT_MIN && divisor==-1) return INT_MAX;
        bool posSign=true;
        if((dividend>=0) && (divisor<0)) posSign=false;
        if((dividend<0) && (divisor>0)) posSign=false;
        // cout << dividend;
        long long abs_dd=labs(dividend);
        long long abs_dv=labs(divisor);
        // cout <<abs_dd;
        long long q=0;
        while(abs_dd>=abs_dv){
            int i=0;
            while(abs_dd >= (abs_dv << i+1)){
                i++;
            }
            abs_dd -= (abs_dv << i);
            q += (1 << i);
        }
        // cout << q;
        if(q>=INT_MAX && posSign==true) return INT_MAX;
        if(q>=INT_MAX && posSign==false) return INT_MIN;
        return posSign ? q : (-1 * q);
    }
};
int main() {
    vector<int> dividends={INT_MAX, -5, 1, INT_MIN, 12, 15, -27, -13, 24, 20};
    int divisor=-1;
    Solution sol;
    for(auto it:dividends){
        int ans=sol.divide(it, divisor);
        printf("%d / %d = %d\n", it, divisor, ans);
    }
    return 0;
}
