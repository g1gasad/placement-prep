#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Inefficient
    // vector<int> singleNumber(vector<int>& nums) {
    //     int n=nums.size();
    //     int xorR=0;
    //     for(int i=0; i<n; i++){
    //         xorR = xorR ^ nums[i];
    //     }
    //     int a=0;
    //     for(int bit=0; bit<32; bit++){
    //         if(xorR & (1 << bit)){
    //             a = a | (1 << bit);
    //         }
    //     }
    // }
    vector<int> singleNumber(vector<int> &nums){
        vector<int> result(2);
        int n=nums.size();
        unsigned int xorNum=0;
        for(int i=0; i<n; i++){
            xorNum=xorNum^nums[i];
        }
        // cout << xorNum;
        unsigned int rightMostSetBit = (xorNum & (xorNum-1)) ^ xorNum;
        // cout << rightMostSetBit << endl;
        unsigned int buck1=0, buck2=0;
        for(int j=0; j<n; j++){
            if((nums[j] & rightMostSetBit)==rightMostSetBit){
                buck1=buck1^nums[j];
            }
            else buck2=buck2^nums[j];
        }
        result[0]=buck1;
        result[1]=buck2;
        return result;
    }
};
int main() {
    // vector<int> nums={2, 4, 2, 14, 3, 7, 7, 3};
    vector<int> nums={1,2,1,3,2,5};
    Solution sol;
    vector<int> ans = sol.singleNumber(nums);
    for(auto it:ans) cout << it << ' ';  
    return 0;
}