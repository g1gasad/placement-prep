#include <bits/stdc++.h>
using namespace std;
int secLar(vector<int> &nums){
    int n=nums.size();
    if(n==1) return nums[0]; 
    int l, sl;
    l = sl = INT_MIN;
    for(int i=1; i<n; i++){
        if(nums[i]>l){
            sl=l;
            l=nums[i];
        }
        else if(nums[i]>sl && nums[i]!=l) sl=nums[i];
    }
    return sl;
}
int main() {
    vector<int> nums = {4, 11, 7, 112};
    int ans = secLar(nums);
    cout << ans << endl;

    return 0;
}