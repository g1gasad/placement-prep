#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        if(n==1 && nums[0]<target) return 0;

        int l=0, r=0, minLen=INT_MAX;
        int sum=0;
        while(r<n){
            if(sum<target) sum += nums[r];
            while (sum>=target){
                int len = r-l+1;
                minLen = min(minLen, len);
                sum -= nums[l];
                l++;
            }
            r++;
        }
        if(minLen==INT_MAX) return 0;
        return minLen;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {2, 3, 1, 2, 4, 3};
    int target = 7;
    int ans = sol.minSubArrayLen(target, nums);
    cout << "min len is " << ans << endl;
    return 0;
}