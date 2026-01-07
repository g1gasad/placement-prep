#include <bits/stdc++.h>
using namespace std;
void clearRightMostBit(int &n){
    int i=0;
    while((n&1) != 1){
        n = n >> 1;
        i++;
    }
    n = n & (~1);
    n = n << i;
}
void clearRightMostBit_optimal(int &n){
    n = n & (n-1);
}
int main() {
    int n=24;
    clearRightMostBit_optimal(n);
    cout << n;
    return 0;
}