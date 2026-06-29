#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int cnt=1;
    for(int i=0; i<n-1; i++){
        int j=i+1;
        for(j; j<n; j++){
            if(arr[j]>arr[i]) break;
        }
        if(j==n) cout << arr[i] << " ";
    }
    cout << arr[n-1];
    return 0;
}