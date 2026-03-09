#include <bits/stdc++.h>
using namespace std;
pair<int, int> floorAndCeil(vector<int> &nums, int target, int n){
    pair<int, int> values;
    int lb = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
    if(nums[lb]==target){
        return {target, target};
    }
    values.first=nums[lb-1];
    values.second=nums[lb];
    return values;
}
int main() {
    vector<int> nums={10, 20, 25, 30, 59};
    pair<int, int> ans=floorAndCeil(nums, 21, nums.size());
    printf("floor is: %d\n Ceil is: %d", ans.first, ans.second);
    return 0;
}