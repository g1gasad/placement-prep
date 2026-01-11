#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int n=arr.size();
        vector<int> hasharr(n, 0);
        vector<pair<int, int>> combined(n);
        for(int bit=0; bit<32; bit++){
            for(int i=0; i<n; i++){
                if(arr[i] & (1<<bit)){
                    hasharr[i]++;
                }
            }
        }
        for(int j=0; j<n; j++){
            combined[j]= make_pair(hasharr[j], arr[j]);
        }
        sort(combined.begin(), combined.end());
        for(int k=0; k<n; k++){
            hasharr[k]=combined[k].second;
        }
        return hasharr;
    }
};
int main() {
    vector<int> nums={0,1,2,3,4,5,6,7,8};
    Solution sol;
    vector<int> ans=sol.sortByBits(nums);
    for(auto it:ans) cout << it << " ";
    return 0;
}