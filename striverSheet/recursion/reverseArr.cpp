#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void f(int i, int n, int arr[]){
    if(i>n/2) return;
    swap(arr[i], arr[n-i-1]);
    f(i+1, n, arr);
}

int main(){
    // vector<int> ls = {2, 4, 6, 8, 10, 12, 14};
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    f(0, 7, arr);
    for(int i=0; i<7; i++) cout << arr[i] << " ";

    return 0;
}