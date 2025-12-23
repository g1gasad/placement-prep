#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=5;
    int a=0;
    for(int i=1; i<=n; i++){
        for(int j=0; j<n-i; j++){
            cout << " ";
        }
        for(int j=1; j<=i; j++){
            cout << ++a << " ";
        }
        cout << endl;
    }
    return 0;
}