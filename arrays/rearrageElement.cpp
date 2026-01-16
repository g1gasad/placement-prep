#include <bits/stdc++.h>
using namespace std;
vector<int> rearragedArr(vector<int> &nums){
    int n=nums.size();
    vector<int> posArr, negArr;
    for(int i=0; i<n; i++){
        if(nums[i]>0) posArr.push_back(nums[i]);
        else negArr.push_back(nums[i]);
    }
    if(posArr.size() > negArr.size()){
        for(int j=0; j<negArr.size(); j++){
            nums[2*j] = posArr[j];
            nums[2*j+1] = negArr[j];
        }
        int index=2 * negArr.size();
        for(int k=negArr.size(); k<posArr.size(); k++){
            nums[index] = posArr[k];
            index++;
        }
    }
    else {
        for(int j=0; j<posArr.size(); j++){
            nums[2*j] = posArr[j];
            nums[2*j+1] = negArr[j];
        }
        int index = 2 * posArr.size();
        for(int k=posArr.size(); k<negArr.size(); k++){
            nums[index] = negArr[k];
            index++;
        }
    }
    return nums;
}
int main() {
    vector<int> nums={-1, 2, -5, 5, 8, 10, -4, 99, 69};
    vector<int> ans=rearragedArr(nums);
    for(auto it:ans) cout << it << " ";
    return 0;
}