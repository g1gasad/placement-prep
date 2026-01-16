#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &nums, int x, int low, int high){
    if(low>high) return -1;
    int mid=(low+high)/2;
    if(x==nums[mid]) return mid;

    else if(x<nums[mid]) return binarySearch(nums, x, low, mid-1);
    else return binarySearch(nums, x, mid+1, high);
}

int main() {
    vector<int> nums={};
    int val=99;
    int index=binarySearch(nums, val, 0, nums.size()-1);
    cout << "index is " << index;
    return 0;
}