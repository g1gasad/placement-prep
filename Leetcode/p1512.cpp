#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i]==nums[j]) cnt++;
            }
        }
        return cnt;
    }
};
int main() {
    Solution sol;
    vector<int> nums = {1,2,3,1,1,3};
    int ans = sol.numIdenticalPairs(nums);
    cout << ans << endl;
    return 0;
}