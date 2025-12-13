#include <bits/stdc++.h>
using namespace std;
int ifSorted(vector<int> &arr, int n){
    int high = arr[0];
    int sorted=1;
    int i=1;
    while(sorted && i<n){
        if(arr[i]<high){
            sorted=0;
        } 
        else{
            high=arr[i];
        }
        i++;
    }
    return sorted;
}
int main() {
    vector<int> ls = {1, 2, 2, 4, 7, 8, 8, 10};
    int n = ls.size();
    if(ifSorted(ls, n)) cout << "Sorted" << endl;
    else cout << "Nope" << endl;
    return 0;
}