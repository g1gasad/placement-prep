#include <bits/stdc++.h>
using namespace std;
vector<int> maxSubsequence(vector<int>& nums, int k) {
    int n=nums.size();
    int max=INT_MIN;
    for(int i=0; i<n; i++){
        int sum=0;
        for(int j=i; j<k+i; j++){
            j=j%n;
            sum += nums[j];
        }  
        if(sum>max) max=sum;
    }
}
int main() {
    vector<int> nums={2,1,3,3};
    int k=2;
    vector<int> ans=maxSubsequence(nums, k);
    for(auto it: ans) cout << it << " ";
    return 0;
}