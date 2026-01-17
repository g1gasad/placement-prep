#include <bits/stdc++.h>
using namespace std;
int iterative_bs(vector<int> &nums, int target){
    int n=nums.size();
    int low=0; int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target) high=mid-1;
        else low=mid+1;
    }
    return ans;
}
int main() {
    vector<int> nums={1, 5, 7, 12, 26, 100, 122};
    int ans = iterative_bs(nums, 26);
    if(ans==-1) cout << "not in arr" << endl;
    else cout << ans;
    return 0;
}