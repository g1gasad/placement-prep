#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findRotation(vector<int>& nums) {
        int n=nums.size();
        int low, mid, high, mini, idx;
        low=0; high=n-1;
        mini=INT_MAX;
        idx=-1;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[low] <= nums[high]){
                if(nums[low]<mini){
                    mini=nums[low];
                    idx=low;
                }
                break;
            }
            if(nums[low]<=nums[mid]){
                if(nums[low]<mini){
                    mini=nums[low];
                    idx=low;
                }
                low=mid+1;
            }
            else{
                if(nums[mid]<mini){
                    mini=nums[mid];
                    idx=mid;
                }
                high=mid-1;
            }
        }
        return idx;
    }
};
int main() {
    vector<int> nums={4,5,6,7,0,1,2};
    Solution sol;
    int ans=sol.findRotation(nums);
    cout << ans;
    return 0;
}