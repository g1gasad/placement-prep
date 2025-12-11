#include <iostream>
using namespace std;
int sumofN(int n){
    if(n==0) return 0;
    return n + sumofN(n-1);
}

int main() {
    int n=100;
    int sum = sumofN(n);
    cout << sum << endl;
    return 0;
}