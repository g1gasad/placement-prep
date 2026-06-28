#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        if(n==0 || m==0) return {};
        vector<int> hash(1001, 0);
        vector<int> out;
        for(int i=0; i<n; i++){
            hash[nums1[i]]++;
        }
        for(int j=0; j<m; j++){
            if(hash[nums2[j]]!=0){
                auto it = find(out.begin(), out.end(), nums2[j]);
                if(it==out.end()){
                    out.push_back(nums2[j]);
                }
            }
        }
        return out;
    }
};
int main() {
    Solution sol;
    vector<int> nums1={1};
    vector<int> nums2={3, 4};
    vector<int> ans=sol.intersection(nums1, nums2);
    for(auto it:ans) cout << it << " ";
    return 0;
}