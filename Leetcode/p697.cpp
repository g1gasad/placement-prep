#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n=nums.size();
        int hash[50000]={0}, firstOcc[50000]={0}, lastOcc[50000]={0};
        int maxFreq=0, x;
        
        for(int i=0; i<n; i++){
            hash[nums[i]]++;
            if(hash[nums[i]]==1) firstOcc[nums[i]]=i;
            if(hash[nums[i]]>=maxFreq){
                maxFreq=hash[nums[i]];
                lastOcc[nums[i]]=i;
                x=nums[i];
            }
        }
        int shortestArr=INT_MAX;
        for(int i=0; i<50000; i++){
            if(hash[i]==maxFreq){
                shortestArr=min(shortestArr, lastOcc[i]-firstOcc[i]+1);
            }
        }
        return shortestArr;
    }
};
int main() {
    Solution sol;
    vector<int> nums={1};
    int ans=sol.findShortestSubArray(nums);
    cout << ans << endl;
    return 0;
}