#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int low, mid, high, mini;
        low=0; high=n-1;
        mini=INT_MAX;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[low] <= nums[high]){
                mini=min(mini, nums[low]);
                break;
            }
            if(nums[low]<=nums[mid]){
                mini=min(mini, nums[low]);
                low=mid+1;
            }
            else{
                mini=min(mini, nums[mid]);
                high=mid-1;
            }
        }
        return mini;
    }
};
int main() {
    vector<int> nums={4,5,6,7,0,1,2};
    Solution sol;
    int ans=sol.findMin(nums);
    cout << ans;
    return 0;
}