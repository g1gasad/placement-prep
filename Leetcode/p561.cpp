#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n=nums.size();
        int maxSum=0;
        int sum1=0;
        for(int i=0; i<n-1; i=i+2){
            int mini=min(nums[i], nums[i+1]);
            sum1 += mini;
        }
        cout << sum1 << endl;
        int sum2=0;
        for(int i=0; i<n-2; i++){
            int mini=min(nums[i], nums[i+2]);
            sum2 += mini;
        }
        cout << sum2 << endl;

        int sum3 = min(nums[0], nums[n-1]);
        for(int i=1; i<n-2; i=i+2){
            int mini=min(nums[i], nums[i+1]);
            sum3 += mini;
        }
        cout << sum3 << endl;

        maxSum=max(sum3, max(sum1, sum2));
        return maxSum;
    }
};
int main() {
    Solution sol;
    vector<int> nums={6,2,6,5,1,2};
    int ans=sol.arrayPairSum(nums);
    cout << ans;
    return 0;
}