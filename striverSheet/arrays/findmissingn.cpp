#include <bits/stdc++.h>
using namespace std;
// another solution to this is simply subtract arr sum from
// summation of n
void findMissing(vector<int> arr, int n){
    int i=0;
    int k=1;
    while(k<=n){
        if(arr[i]!=k){
            cout << k << endl;
            break;
        }
        k++; i++;
    }
}
void missing(vector<int> &arr, int n){
    int xor1=0;
    int xor2=0;
    for(int i=0; i<n-1; i++){
        xor1=xor1^arr[i];
    }
    for(int j=1; j<=n; j++){
        xor2=xor2^(j);
    }
    int result = xor1 ^ xor2;
    cout << result << endl;
}
int main() {
    vector <int> ls = {1, 2, 3, 4, 5, 6, 7, 9};
    int n=9;
    findMissing(ls, n);
    missing(ls, n);
    return 0;
}