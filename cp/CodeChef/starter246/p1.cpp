#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    for(int i=0; i<t; i++){
        int n; cin>>n;
        vector<int> days;
        for(int j=0; j<n; j++){
            int x; cin >> x;
            days.push_back(x);
        }
        int maxi=INT_MIN;
        for(int k=0; k<n-1; k++){
            int mini=min(days[k], days[k+1]);
            maxi=max(maxi, mini);
        }
        cout << maxi << endl;
    }
    return 0;
}