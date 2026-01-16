#include <bits/stdc++.h>
using namespace std;
void leftRotate(int arr[], int n, int k){
    reverse(arr, arr+k);
    reverse(arr+k, arr+n);
    reverse(arr, arr+n);
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int k=1, n=5;
    leftRotate(arr, n, k);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}