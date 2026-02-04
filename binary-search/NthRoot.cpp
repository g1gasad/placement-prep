#include <bits/stdc++.h>
using namespace std;
int nthPower(int &x, int &n){
    int ans=1;
    for(int i=0; i<n; i++){
        ans *= x;
    }
    return ans;
}

// time complexity: O(log [base 2] N)

int nthRoot(int &x, int &n){
    int low, mid, high;
    low=1; high=x;
    while(low<=high){
        mid=(low+high)/2;
        int nth = nthPower(mid, n);
        if(nth==x){
            return mid;
        }
        else if(nth>x) high=mid-1;
        else low=mid+1;
    }
    return -1;
}
int main() {
    int m=123321; int n=2;
    int ans=nthRoot(m, n);
    cout << ans;
    return 0;
}