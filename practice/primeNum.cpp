#include <bits/stdc++.h>
#include <cmath>
using namespace std;
void checkPrime(int x){
    for(int i=2; i<sqrt(x); i++){
        if(x%i==0) {
            cout << "Not prime";
            return;
        }
    }
    cout << "Prime";
}

int main() {
    int n=29;
    checkPrime(n);
    return 0;
}