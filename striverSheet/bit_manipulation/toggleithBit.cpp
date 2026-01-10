#include <bits/stdc++.h>
using namespace std;
void toggleithBit(int &n, int &i){
    int bit = 1 << i;
    n = n ^ bit;
}
int main() {
    int n=13;
    int i=2;
    toggleithBit(n, i);
    toggleithBit(n, i);
    // toggleithBit(n, i);
    cout << n;
    return 0;
}