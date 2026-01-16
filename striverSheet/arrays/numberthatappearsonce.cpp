#include <bits/stdc++.h>
using namespace std;
int appearsOnce(vector<int> &arr){
    int n=arr.size();
    // map <long long, int> mpp;
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
int mapFunc(vector<int> &arr){
    int n=arr.size();
    unordered_map<long long, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second==1) return it.first;
    }
}

int main() {
    vector<int> ls={4,1,2,1,2, 4, 5, 9, 9};
    // int num=appearsOnce(ls);
    int num=mapFunc(ls);
    cout << "appears only once is " << num << endl;
    return 0;
}