#include <bits/stdc++.h>
using namespace std;

void swapNums(int &a, int &b){
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
}

int main() {
    int a=5, b=7;
    swapNums(a, b);
    cout << a << " " << b;
    return 0;
}