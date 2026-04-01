#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int atMost(vector<int> nums, int goal){
        int n=nums.size();
        int l=0, r=0, sum=0, subArrCount=0;
        while(r<n){
            sum += nums[r];

            while(sum>goal){
                sum -= nums[l];
                l++;
            }

            subArrCount += (r-l+1);
            r++;
        }
        return subArrCount;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atMost(nums, goal) - atMost(nums, goal-1);
    }
};
#include <bits/stdc++.h>
using namespace std;

int main() {
    Solution sol;
    vector<int> nums = {1,0,1,0,1};
    int goal = 2;
    int ans=sol.numSubarraysWithSum(nums, goal);
    cout << "total subarr are: " << ans << endl;
    return 0;
}