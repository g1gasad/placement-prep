#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int n=pref.size();
        vector<int> arr(n);
        arr[0]=pref[0];
        for(int i=1; i<n; i++){
            int x = pref[i-1] ^ pref[i];
            arr[i]=x;
        }
        return arr;
    }
};
int main() {
    Solution sol;
    vector<int> pref={13, 0, 1, 22, 91, 4};
    vector<int> ans=sol.findArray(pref);
    for(int x:ans) cout << x << " ";

    return 0;
}