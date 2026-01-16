#include <bits/stdc++.h>
using namespace std;
vector<int> maxSubArray(vector<int>& nums) {
    int sum=0, maxi=INT_MIN;
    int start;
    int ansStart, ansEnd;
    ansStart = ansEnd = -1;

    vector<int> subArray;
    for(int i=0; i<nums.size(); i++){
        if(sum==0) start=i;
        sum += nums[i];
        if(sum > maxi) {
            maxi = sum;
            ansStart=start;
            ansEnd=i;
        }
        if(sum < 0) {
            sum=0;
        }
    }
    for(int j=ansStart; j<ansEnd; j++){
        subArray.push_back(nums[j]);
    }
    return subArray;
}
int main() {
    vector<int> nums={2, 3, };
    // vector<int> nums={-2, -3, -7, -2, -10, -4};
    vector<int> ans=maxSubArray(nums);
    for(auto it:ans) cout << it << " ";
    // printf("max sum is %d", ans);
    return 0;

}