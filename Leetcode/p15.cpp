#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int>& nums) {
    int n=nums.size();
    if(n<3) return {};
    vector<vector<int>> groups;
    int i=0, j, k;

    while(i<j){
        j=i+1;
        while(j<k){
            k=j+1;
            while(k<n){
                long long sum=nums[i]+nums[j]+nums[k];
                if(sum==0){
                    vector<int> g={nums[i], nums[j], nums[k]};
                    groups.push_back(g);
                }
                k++;
            }
            j++;
            k=j+1;
        }
        i++;
        j=i+1;
    }
    return groups;
}
int main() {
    vector<int> nums={-1,0,1,2,-1,-4};
    vector<vector<int>> ans=threeSum(nums);
    for(auto list:ans){
        cout << "[ ";
        for(auto it:list) cout << it << " ";
        cout << "]" << endl;
    }
    return 0;
}