#include <bits/stdc++.h>
using namespace std;

void setithBit(int &n, int &i){
    int x = 1;
    x = x << i;
    n = n | x;
}
int main() {
    int n=13, i=4;
    setithBit(n, i);
    cout << n;
    return 0;
}