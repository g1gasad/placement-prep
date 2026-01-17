#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans={-1, -1};
        int n=nums.size();
        if(n==0) return ans;

        int low=0; int high=n-1;

        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                ans[0]=mid;
                high=mid-1;
            }
            else if(nums[mid] < target) low=mid+1;
            else high=mid-1;
        }
        if(ans[0]==-1) return ans;
        
        low=0; high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                ans[1]=mid;
                low=mid+1;
            }
            else if(nums[mid] < target) low=mid+1;
            else high=mid-1;
            }
        return ans;
        }
};
int main() {
    vector<int> nums={2, 4, 6, 7, 7, 7, 8, 11, 14};
    int x=1;
    Solution sol;
    vector<int> ans=sol.searchRange(nums, x);
    printf("first occ: %d\nsecond occ: %d", ans[0], ans[1]);
    return 0;
}