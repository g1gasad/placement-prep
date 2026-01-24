#include <bits/stdc++.h>
using namespace std;
int searchSortedArr(vector<int> &nums, int target){
    int idx=-1;
    int n = nums.size();
    if(n==0) return -1;

    int mid, low, high;
    low=0; high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]==target) return mid;
        else if(nums[low]<=nums[mid]){
            if(target>=nums[low] && target<=nums[mid]) high=mid-1;
            else low=mid+1;
        }
        else {
            if(target<=nums[high] && target>=nums[mid]) low=mid+1;
            else high=mid-1;
        }
    }
    return idx;
}
int main() {
    vector<int> nums={4, 2};
    int target=0;
    int ans = searchSortedArr(nums, 2);
    if(ans==-1) cout << "not in arr";
    else cout << "found at index " << ans;
    return 0;
}