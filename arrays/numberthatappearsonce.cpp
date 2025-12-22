#include <bits/stdc++.h>
using namespace std;
int appearsOnce(vector<int> &arr){
    int n=arr.size();
    map <long long, int> mpp;
    int hasharr[n+1]={0};
    for(int i=0; i<n; i++){
        hasharr[arr[i]]++;
    }
    for(int j=0; j<n; j++){
        if(hasharr[j]==1){
            return j;
        }
    }
    return -1;
}
int main() {
    vector<int> ls={4,1,2,1,2, 4, 5, 9, 9};
    int num=appearsOnce(ls);
    cout << "appears only once is " << num << endl;
    return 0;
}