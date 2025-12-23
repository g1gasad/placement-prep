#include <bits/stdc++.h>
using namespace std;

int main() {
    int n=5; 
    char ch='a';
    for(int i=0; i<n; i++){

        for(int j=1; j<=n-i; j++){
            cout << ch << " ";
        }
        cout << endl;
        ch++;
    }

    return 0;
}