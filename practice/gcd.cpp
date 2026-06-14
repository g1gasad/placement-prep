#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(a==b) return a;
    int x;
    if(a>b) x=a/2;
    else x=b/2;
    for(int i=x; i>1; i--){
        if(a%i==0 && b%i==0){
            return i;
        }
    }
    return 1;
}
int main() {
    int ans = gcd(24, 19);
    cout << ans;
    return 0;
}