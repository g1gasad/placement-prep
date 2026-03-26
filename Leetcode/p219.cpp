#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int, int> mpp;
        for(int i=0; i<n; i++){
            int x=nums[i];
            if(mpp.find(x)!=mpp.end()){
                if(abs(mpp[x]-i)<=k){
                    return true;
                }
            }
            mpp[x]=i;
        }
        return false;
    }
};
int main() {
    vector<int> nums = {1,2,3,1,2,3};
    int k=2;
    Solution sol;
    bool ans = sol.containsNearbyDuplicate(nums, k);
    if(ans) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}