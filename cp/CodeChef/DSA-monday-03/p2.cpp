#include <bits/stdc++.h>
using namespace std;
bool hasDuplicate(const vector<int>& nums) {
    // write your code here 
    int n=nums.size();
    int hash[101]={0};
    for(int i=0; i<n; i++){
        hash[nums[i]]++;
        if(hash[nums[i]]==2) return true;
    }
    return false;
}
int main() {
    vector<int> nums = {1, 2, 3, 7, 9, 11};
    bool ans = hasDuplicate(nums);
    if(ans) cout << "yussir" << endl;
    else cout << "neop" << endl;

    return 0;
}