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
int main() {
    vector <int> ls = {1, 2, 3, 4, 5, 6, 7, 10};
    int n=10;
    findMissing(ls, n);
    return 0;
}