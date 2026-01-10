#include <bits/stdc++.h>
using namespace std;
int countSetBits(int &n){
    int cnt=0;
    while(n>1){
        // if(n%2==1) cnt++;
        cnt += n & 1;
        // n = n/2;
        n = n >> 1;
    }
    if(n==1) cnt++;
    return cnt;
}

int main() {
    int n=2047;
    int ans=countSetBits(n);
    cout << ans;
    return 0;
}