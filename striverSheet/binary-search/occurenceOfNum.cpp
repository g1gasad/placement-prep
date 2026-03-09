#include <bits/stdc++.h>
using namespace std;
int countOccurence(vector<int> &nums, int x, int n){
    if(n==0) return -1;
    int first, last;
    first = last = -1;
    int mid, low=0, high=n-1;
    while(low<=high){
        mid = (low+high)/2;
        if(nums[mid]==x){
            first=mid;
            high=mid-1;
        }
        else if(nums[mid]<x) low=mid+1;
        else high = mid-1;
    }
    if(first==-1) return -1;
    
    low=0; high=n-1;
    while(low<=high){
        mid = (low+high)/2;
        if(nums[mid]==x){
            last=mid;
            low=mid+1;
        }
        else if(nums[mid]<x) low=mid+1;
        else high = mid-1;
    }
    return last-first+1;
}
int main() {
    vector<int> nums = {2, 2, 3, 3, 3, 3, 4};
    int ans = countOccurence(nums, 1, 7);
    cout << ans;
    return 0;
}