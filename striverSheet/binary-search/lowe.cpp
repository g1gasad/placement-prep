#include <bits/stdc++.h>
using namespace std;
vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans={-1, -1};
    int n=nums.size();
    auto itlower = lower_bound(nums.begin(), nums.end(), target);
    auto itupper = upper_bound(nums.begin(), nums.end(), target);
    int lpos = itlower - nums.begin();
    int upos = itupper - nums.begin();
    ans[1]=upos-1; ans[0]=lpos;
    return ans;
}
int main() {
    vector<int> nums={5,7,7,8,8,10};
    int target=10;
    vector<int> ans=searchRange(nums, target);
    for(auto it: ans) cout << it << " ";
    return 0;
}