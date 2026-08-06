#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr;
        for(int i=0; i<n; i++){
            arr.push_back(nums[i]);
            arr.push_back(nums[i+n]);
        }
        return arr;
    }
};
int main(){
    Solution sol;
    vector<int> nums={1,2,3,4,4,3,2,1};
    int n=4;
    vector<int> ans=sol.shuffle(nums, n);
    for(int x : ans) cout << x << " ";
    return 0;
}