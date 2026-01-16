#include <bits/stdc++.h>
using namespace std;
vector<int> leaderArr(vector<int> &nums){
    int n=nums.size();
    vector<int> leader;
    int max=INT_MIN;
    for(int i=n-1; i>=0; i--){
        if(nums[i]>max) {
            max=nums[i];
            leader.push_back(max);
        }
    }
    reverse(leader.begin(), leader.end());
    return leader;
}
int main() {
    vector<int> nums={10, 22, 12, 3, 0, 6};
    vector<int> ans=leaderArr(nums);
    for(auto it:ans) cout << it << " ";
    return 0;
}