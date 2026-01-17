#include <bits/stdc++.h>
using namespace std;
int upperBound(vector<int> &nums, int target, int n){
    int low=0; int high=n-1;
    int ans=n;
    while(low <= high){
        int mid = (low + high) / 2;
        if(nums[mid] > target){
            low=mid+1;
            ans=mid;
        }
        else{
            high=mid-1;
        }
    }
    return nums[ans];
}

int main() {
    vector<int> nums={2,4,6,7};
    int n=nums.size();
    int target=20;
    int ans=upperBound(nums, target, n);
    cout << "upper bound is: " << ans << endl;
    return 0;
}