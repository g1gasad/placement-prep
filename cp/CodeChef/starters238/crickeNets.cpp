#include <bits/stdc++.h>
using namespace std;
int totalAmount(int x){
    if(x<=20) return x*10;
    else{
        return 200 + (((x - 20) / 2) * 5);
    }
}
int main() {
    int t; cin >> t;
    vector<int> testCases(t);
    for(int i=0; i<t; i++){
        cin >> testCases[i];
    }
    for(int j=0; j<t; j++){
        int ans = totalAmount(testCases[j]);
        cout << ans << endl;
    }
    return 0;
}