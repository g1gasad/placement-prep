#include <bits/stdc++.h>
using namespace std;
bool powerof2(int &n){
    n = n & (n-1);
    // cout << n << " ";
    if(n==0) return true;
    else return false;
}
int main() {
    vector<int> nums = {13, 12, 4, 12, 18, 8, 10, 1, 2, 82};
    bool ans;
    for(auto it:nums){
        cout << it << " ";
        ans = powerof2(it);
        if(ans) cout << "yes" << endl;
        else cout << "no" << endl;
    } 
    return 0;
}