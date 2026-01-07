#include <bits/stdc++.h>
using namespace std;
int minBitFlips(int &a, int &b){
    a = a ^ b;
    // above will give the number of distinct bits
    int cnt=0;
    while(a>1){
        cnt += a & 1;
        a = a >> 1;
// above will give the num of 1s till n>1
    }
    if(a==1) cnt++;
    return cnt;
}
int main() {
    int a=10;
    int b=7;
    int ans=minBitFlips(a, b);
    cout << ans;
    return 0;
}