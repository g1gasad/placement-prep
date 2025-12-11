#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void isPrime(int x){
    int prime=1;
    for(int i=2; i*i<x; i++){
        if(x%i==0){
            prime=0;
        }
    }
    if(prime){
        cout << x << " is prime"<< endl;
    }
    else{
        cout << x << " is not prime" << endl;
    }
}
int main(){
    int n;
    vector<int> ls = {5, 14, 22, 19, 77, 100, 71, 59};
    // cout << "Enter a num: ";
    // cin >> n;
    for(int n : ls) {
        isPrime(n);
    }
    return 0;
}