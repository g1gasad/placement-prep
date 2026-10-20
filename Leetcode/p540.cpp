#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        int low=0, high=n-1, mid;
        bool firstPass=true;
        while(low <= high){
            mid=(low+high)/2;
            if(nums[mid]==nums[mid-1]){
                if(firstPass) {
                    high=mid-2;
                    firstPass=false;
                    }
                else low=mid+1;
            }
            else if(nums[mid]==nums[mid+1]){
                if(firstPass){
                    low=mid+2;
                    firstPass=false;
                } 
                else high=mid-1;
            }
            else return nums[low];
        }       
        return -1;
    }
};
int main() {
    Solution sol;
    vector<int> nums={1, 1, 2, 2, 3, 3, 4, 4, 8, 8, 9};
    int ans=sol.singleNonDuplicate(nums);
    cout << ans << endl;
    return 0;
}