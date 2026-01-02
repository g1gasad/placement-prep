#include <bits/stdc++.h>
using namespace std;
int searchInsert(vector<int>& nums, int target) {
    int n=nums.size();
    int i=0;
    while(i<n){
        if(nums[i]==target) return i;
        else if(nums[i]>target) return i;
        i++;
    }
}
int main() {
    vector<int> arr={1,3,5,10};
    int target=4;
    int result=searchInsert(arr, target);
    printf("the index of target %d is %d", target, result);
    return 0;
}