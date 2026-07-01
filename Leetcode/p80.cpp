#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 1;
        int i=0, j=2;
        while(j<n){
            if(nums[i]!=nums[j]){
                nums[i+2]=nums[j];
                i=i+2;
            };
            j++;
        }
        return i;
    }
};
int main() {
    Solution sol;
    vector<int> nums={1, 1, 1, 2, 2, 2};
    int ans=sol.removeDuplicates(nums);
    cout << ans;
    return 0;
}