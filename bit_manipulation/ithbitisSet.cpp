#include <bits/stdc++.h>
using namespace std;

bool setBit(int &n, int &i){
    int x = n >> i;
    x = x & 1;
    if(x) return true;
    else return false;
}
int main() {
    int n=13;
    int i=1;
    bool ans = setBit(n, i);
    if(ans) printf("%dth bit is set", i);
    else printf("nope");
    return 0;
}