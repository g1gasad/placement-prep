#include <bits/stdc++.h>
using namespace std;
pair<vector<int>, int> removeDuplicates(vector<int> &nums){
    int n=nums.size();
    int i=0, j=1;
    while(j<n){
        if(nums[j]!=nums[i]){
            nums[i+1]=nums[j];
            i++;
        }
        j++;
    }
    return {nums, i+1};
}
int main() {
    vector<int> ls={1, 1, 2, 2, 2, 3, 3, 4, 4, 4, 5};
    auto result = removeDuplicates(ls);
    vector<int> deduped = result.first;
    int newSize = result.second;
    for(auto e:deduped) cout << e << " ";
    cout << endl << "New size is " << newSize << endl;
    return 0;
}