#include <bits/stdc++.h>
#include <cmath>
using namespace std;
void checkPrime(int x){
    for(int i=2; i<sqrt(x); i++){
        if(x%i==0) {
            cout << "Not prime" << endl;
            return;
        }
    }
    cout << "Prime" << endl;
}

int main() {
    int n=290;
    checkPrime(n);
    return 0;
}