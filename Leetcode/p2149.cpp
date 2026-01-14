#include <bits/stdc++.h>
using namespace std;
vector<int> rearrangeArray(vector<int>& nums) {
    int n=nums.size();
    vector<int> result(n);
    int i=0;
    int posIdx, negIdx;
    posIdx=0;
    negIdx=1;
    while(i<n){
        if(nums[i]>0){
            result[posIdx]=nums[i];
            posIdx += 2;
        }
        else{
            result[negIdx]=nums[i];
            negIdx += 2;
        }
        i++;
    }
    return result;
}
int main() {
    vector<int> nums={3,1,-2,-5,2,-4};
    vector<int> ans=rearrangeArray(nums);
    for(auto it:ans) cout << it << " ";
    return 0;
}