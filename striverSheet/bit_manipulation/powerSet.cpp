#include <bits/stdc++.h>
using namespace std;
list<list<int>> powerSet(vector<int> &nums){
    int n=nums.size();
    int totalSets= 1 << n;
    list<list<int>> powerSets={};
    list<int> subSet;
    for(int i=0; i<totalSets; i++){
        subSet={};
        int k;
        for(int j=0; j<n; j++){
            k=i>>j;
            if((k&1)==1){
                subSet.push_back(nums[j]);
            }
        }
        powerSets.push_back(subSet);
    }
    return powerSets;
}
int main() {
    vector<int> nums={1, 2, 3};
    list<list<int>> ans = powerSet(nums);
    for(auto it:ans){
        cout << "[ ";
        for(auto el:it){
            cout << el << " ";
        }
        cout << "]" << endl;
    }
    return 0;
}