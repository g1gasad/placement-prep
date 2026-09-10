#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();
        int maxSum=INT_MIN;
        for(int i=0; i<n; i++){
            int sum=0;
            for(int j=0; j<n; j++){
                sum += (nums[j] * ((i+j)%n));
            }
            maxSum=max(maxSum, sum);
        }
        return maxSum;
    }
};
int main() {
    Solution sol;
    vector<int> nums={4, 3, 2, 6};
    int ans=sol.maxRotateFunction(nums);
    cout << ans << endl;


    return 0;
}