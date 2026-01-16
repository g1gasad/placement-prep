#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& nums) {
    int n=nums.size();
    if(n==0) return 0;
    sort(nums.begin(), nums.end());
    int longest=1;
    int cntCurr=0;
    int lastSmaller=INT_MIN;
    for(int i=0; i<n; i++){
        if(nums[i]-1==lastSmaller){
            cntCurr++;
            lastSmaller=nums[i];
        }
        else if(nums[i]-1!=lastSmaller){
            cntCurr=1;
            lastSmaller=nums[i];
        }
        longest=max(longest, cntCurr);
    }
    return longest;
}
int main() {
    vector<int> nums={100, 4, 200, 1, 3, 2};
    int ans=longestConsecutive(nums);
    printf("ans is %d", ans);
    return 0;
}