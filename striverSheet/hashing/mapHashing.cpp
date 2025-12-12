#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=10; 
    // cin>>n;
    int arr[n] = {3, 5, 1, 2, 1, 6, 7, 2, 2, 5};
    // for(int i=0; i<n; i++){
    //     cin >> arr[i];
    // }
    // pre-compute
    map<int, int> mpp;
    for(int i=0; i<n; i++){
        mpp[arr[i]]++;
    }
    int q; cin>>q;
    while(q--){
        int num;
        cin >> num;
        cout << num << " is these many ";
        cout << mpp[num] << endl;
    }
    for(auto it:mpp){
        cout << it.first << "->" << it.second << endl;
    }
    return 0;
}