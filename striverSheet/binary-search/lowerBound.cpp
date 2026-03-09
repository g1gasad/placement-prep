#include <bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> &nums, int target, int n){
    int low=0; int high=n-1;
    int ans=n;
    while(low <= high){
        int mid = (low + high) / 2;
        if(nums[mid] >= target){
            high=mid-1;
            ans=mid;
        }
        else{
            low=mid+1;
        }
    }
    return nums[ans];
}

int main() {
    vector<int> nums={3, 5, 7, 15, 19, 31};
    int n=nums.size();
    int target=31;
    int ans=lowerBound(nums, target, n);
    cout << "lower bound is: " << ans << endl;
    return 0;
}