#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMax(vector<int> &arr){
        int maxi=INT_MIN;
        int n=arr.size();
        for(int i=0; i<n; i++){
            maxi=max(maxi, arr[i]);
        }
        return maxi;
    }
    long long calculateDivRes(vector<int> &nums, int x){
        int divRes=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            divRes += (nums[i] + x - 1) / x;
        }
        return divRes;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1; int high=findMax(nums);
        while(low<=high){
            int mid=(low+high)/2;
            int totalDivRes=calculateDivRes(nums, mid);
            cout << totalDivRes << endl;
            if(totalDivRes<=threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
int main() {
    Solution sol;
    vector<int> nums={44,22,33,11,1};
    int thre=5;
    int ans=sol.smallestDivisor(nums, thre);
    cout << ans;
    return 0;
}