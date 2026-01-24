#include <bits/stdc++.h>
using namespace std;
int searchSingleElement(vector<int> &nums){
    int n=nums.size();
    if(n==1) return nums[0];

    int low, mid, high, ans;
    low=1; high=n-2;
    if(nums[low]!=nums[low-1]) return nums[low-1];
    if(nums[high]!=nums[high+1]) return nums[high+1];

    while(low<=high){
        mid= (low + high) / 2;
        if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){
            return nums[mid];
        }
        else if(mid%2==1){
            if(nums[mid]==nums[mid-1]) low=mid+1;
        }
        else {
            if(nums[mid]==nums[mid+1]) high=mid-1;
        }
    }

    return ans;
}
int main() {
    vector<int> nums={1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int ans=searchSingleElement(nums);
    cout << ans;
    return 0;
}