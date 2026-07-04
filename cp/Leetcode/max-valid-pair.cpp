#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>=n) return 0;
        int maxSum=INT_MIN;
        int idx=-1;
        for(int i=0; i<n-k; i++){
            int windowMax=INT_MIN;
            int j=i+k;
            if(idx>=j) continue;
            while(j<n && idx<j){
                windowMax=max(windowMax, nums[j]);
                if(nums[j]>windowMax){
                    windowMax=nums[j];
                    idx=j;
                }
                j++;
            }
            maxSum=max(maxSum, nums[i]+windowMax);
        }
        return maxSum;
    }
};
int main() {
    Solution sol;
    vector<int> nums={1,10,5,2,8, 9};
    int k=1;
    int ans=sol.maxValidPairSum(nums, k);
    cout << ans;
    return 0;
}