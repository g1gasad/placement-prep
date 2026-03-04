#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    float average(vector<int> &nums, int &n, int &i){
        float sum=0.0;
        for(int j=i+1; j<n; j++){
            sum += nums[j];
        }
        float avg = sum / (n-1-i);
        return avg;
    }
    int dominantIndices(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0; i<n-1; i++){
            float avg = average(nums, n, i);
            if(nums[i]>avg) cnt++;
        }
        return cnt;
    }
};
int main() {
    vector<int> nums={4, 1, 2};
    Solution sol;
    int ans = sol.dominantIndices(nums);
    cout << ans;
    return 0;
}