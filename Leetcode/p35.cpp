#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int n=nums.size();
    int low=0;
    int high=n-1;
    int idx=n;

    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]>target) {
            idx=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return idx;
}
int main() {
    vector<int> arr={1,3,5,10};
    vector<int> targets = {5, -1, 7, 100, 99, 3, 10, -44, 123, 6};
    for(int i=0; i<targets.size(); i++){
        int target=targets[i];
        int result=searchInsert(arr, target);
        printf("the index of target %d is %d\n", target, result);
    }
    return 0;
}