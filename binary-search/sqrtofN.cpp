#include <bits/stdc++.h>
using namespace std;
int bsSqrt(int &n){
    int low, mid, high;
    low=1; high=n;
    while(low<=high){
        mid = (low+high)/2;
        int midsqr=mid*mid;
        if(midsqr==n) return mid;
        else if(midsqr>n) high=mid-1;
        else low=mid+1;
    }
    return mid-1;
}
int main() {
    int n=101111;
    int ans=bsSqrt(n);
    cout << ans;
    return 0;
}