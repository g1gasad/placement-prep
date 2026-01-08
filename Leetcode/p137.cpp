#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int bit=0; bit<32; bit++){
            int countOnes=0;
            for(int i=0; i<n; i++){
                // printf("%d - %d - ", nums[i], bit);
                if(nums[i] & (1 << bit)) countOnes++;
                // cout << countOnes << endl;
            }
            if(countOnes%3!=0) ans=ans + pow(2, bit);
        }
        return ans;
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