#include <bits/stdc++.h>
using namespace std;
bool search(vector<int> &nums, int target){
    int n = nums.size();
    if(n==0) return -1;

    int mid, low, high;
    low=0; high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(nums[mid]==target) return true;
        if(nums[mid]==nums[low] && nums[mid]==nums[high]){
            low++; high--;
            continue;
        }
        else if(nums[low]<=nums[mid]){
            if(target>=nums[low] && target<=nums[mid]) high=mid-1;
            else low=mid+1;
        }
        else {
            if(target<=nums[high] && target>=nums[mid]) low=mid+1;
            else high=mid-1;
        }
    }
    return false;
}
int main() {
    vector<int> nums={3, 3, 1, 2, 3, 3, 3, 3};
    int target=0;
    bool ans = search(nums, 0);
    if(!ans) cout << "not in arr";
    else cout << "found";
    return 0;
}