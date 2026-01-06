#include <bits/stdc++.h>
using namespace std;
void clearithBit(int &n, int &i){
    int x = 1 << i;
    x = ~(x);
    n = n & x;
}
int main() {
    int n=68;
    int i=2;
    clearithBit(n, i);
    cout << n;
    return 0;
}