#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // will work only with positive nums
    // int singleNumber(vector<int>& nums) {
    //     int ans=0;
    //     int n=nums.size();
    //     for(int bit=0; bit<32; bit++){
    //         int countOnes=0;
    //         for(int i=0; i<n; i++){
    //             if(nums[i] & (1 << bit)) countOnes++;
    //         }
    //         if(countOnes%3!=0) ans=ans + pow(2, bit);
    //     }
    //     return ans;
    // }
    int singleNumber(vector<int> &nums){
        int ones=0, twos=0, n=nums.size();
        for(int i=0; i<n; i++){
            ones = (ones ^ nums[i]) & (~twos);
            twos = (twos ^ nums[i]) & (~ones);
        }
        return ones;
    }
};
int main() {
    vector<int> nums={0,1,0,1,0,1,99};
    // vector<int> nums={2,2,3,2};
    Solution sol;
    int ans=sol.singleNumber(nums);
    cout << ans;
    return 0;
}