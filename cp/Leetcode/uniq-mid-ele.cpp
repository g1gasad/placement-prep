#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return false;
        int mid=nums[n/2];
        for(int i=0; i<n/2; i++){
            if(nums[n/2-i-1]==mid || nums[n/2+i+1]==mid) return false;
        }
        return true;
    }
};
int main() {
    Solution sol;
    vector<int> nums={1, 1, 3, 4, 4};

    bool ans=sol.isMiddleElementUnique(nums);
    if(ans) cout << "ye";
    else cout << "na";
    return 0;
}