#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==3) return nums[0] * nums[1] * nums[2];
        int max, smax, tmax;
        max = smax = tmax = INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i]>max) {
                smax=max;
                max=nums[i];
            }
            if(nums[i]<max && nums[i]>smax){
                tmax=smax;
                smax=nums[i];
            } 
            if(nums[i]<smax && nums[i]>tmax) tmax=nums[i];
        }
        return max * smax * tmax;
    }
};
int main() {
    Solution sol;
    vector<vector<int>> numsArr = {
        {1, 2, 3, 4},
        {1, 2, 4},
        {-1, -3, -8},
        {7, 1, 4, 9, 2}
    };
    for(int j=0; j<numsArr.size(); j++){
        int ans = sol.maximumProduct(numsArr[j]);
        cout << ans << endl;
    }
    return 0;
}