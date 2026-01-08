#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countPairs(vector<int>& nums, int low, int high) {
        int n=nums.size();
        int count=0;
        for(int i=0; i<n-1; i++){
            for(int j=i; j<n; j++){
                if(i!=j){
                    printf("{%d - %d} - ", nums[i], nums[j]);
                    int xorRes = nums[i]^nums[j];
                    cout << xorRes <<  endl;
                    if(xorRes>=low && xorRes<=high){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};
int main() {
    // nums = [1,4,2,7], low = 2, high = 6
    vector<int> nums={9,8,4,2,1};
    int low=5; int high=14;
    Solution sol;
    int ans=sol.countPairs(nums, low, high);
    cout << ans;
    return 0;
}