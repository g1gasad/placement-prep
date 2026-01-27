#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int countNonMinimum(vector<int>& nums) {
        // write your code here 
        int mini=INT_MAX;
        int n=nums.size();
        if(n==1) return nums[0];
        
        int cnt=0;
        for(int i=0; i<n; i++){
            mini=min(mini, nums[i]);
        }
        for(int j=0; j<n; j++){
            if(nums[j]>mini){
                nums[j]=mini;
                cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    vector<int> nums={2, 2, 3, 4};
    Solution sol;
    int ans=sol.countNonMinimum(nums);
    cout << ans;
    return 0;
}