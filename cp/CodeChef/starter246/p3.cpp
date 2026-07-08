#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; cin >> t;
    for(int i=0; i<t; i++){
        int n; cin>>n;
        vector<int> nums;
        for(int j=0; j<n; j++){
            int x; cin >> x;
            nums.push_back(x);
        }
        int totalTime=0;
        int maxi=INT_MIN;
        for(int k=0; k<n; k++){
            maxi=max(maxi, nums[k]);
            int wait = maxi - nums[k];
            totalTime += wait;
        }
        cout << totalTime << endl;
    }
    return 0;
}