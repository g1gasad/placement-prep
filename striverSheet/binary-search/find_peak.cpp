#include <bits/stdc++.h>
using namespace std;
int findPeak(vector<int> &nums){
    int n=nums.size();
    if(n==1) return 0;
    if(nums[0]>nums[1]) return 0;
    if(nums[n-1]>nums[n-2]) return n-1;
    int low, high, mid;
    low=1; high=n-2;
    while(low<high){
        mid=(low+high)/2;
        if((nums[mid]>nums[mid-1]) && (nums[mid]>nums[mid+1])){
            return mid;
        }
        else if(nums[mid-1]<nums[mid]) low=mid+1;
        else if(nums[mid]<nums[mid+1]) high=mid-1;
    }
}

int main() {
    // vector<int> nums={1, 10, 14, 7, 6, 5, 4, 3, 2, 1, 0};
    // vector<int> nums={7, 6, 5, 4, 3, 2, 1, 0};
    vector<int> nums={1,2,1,3,5,6,4};
    int ans=findPeak(nums);
    cout << "peak is: " << ans << endl;
    return 0;
}