#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans={-1, -1};
        int n=nums.size();
        if(n==0) return ans;
        int lb = lower_bound(nums.begin(), nums.end(), target)- nums.begin();
        
        if(lb==n || nums[lb]!=target) return ans;

        int ub = upper_bound(nums.begin(), nums.end(), target) - nums.begin();
        ans[0] = lb;
        ans[1] = ub-1;
        return ans;
    }
};
int main() {
    vector<int> nums={2, 4, 6, 7, 7, 7, 8, 11, 14};
    int x=11;
    Solution sol;
    vector<int> ans=sol.searchRange(nums, x);
    printf("first occ: %d\nsecond occ: %d", ans[0], ans[1]);
    return 0;
}