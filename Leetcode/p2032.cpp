#include <bits/stdc++.h>
using namespace std;
vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    unordered_map<int, int> mpp;
    vector<int> outputArr;
    for(int i=0; i<nums1.size(); i++){
        mpp[nums1[i]]++;
    }
    for(int j=0; j<nums2.size(); j++){
        mpp[nums2[j]]++;
    }
    for(int k=0; k<nums3.size(); k++){
        mpp[nums3[k]]++;
    }
    for(auto it:mpp){
        if(it.second>=2){
            outputArr.push_back(it.first);
        }
    }
    return outputArr;
}
int main() {
    vector<int> num1={1, 1, 2, 3};
    vector<int> num2={2, 3};
    vector<int> num3={3};
    vector<int> ans=twoOutOfThree(num1, num2, num3);
    for(auto it:ans) cout << it << " ";
    return 0;
}