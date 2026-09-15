#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<pair<int, int>> vp;
        int maxD=0;
        for(int i=0; i<n; i++){
            int left=i, right=m-1;
            while(left <= right){
                int mid=(left+right)/2;
                if(nums2[mid] > )
            }

        }
        return maxD;
    }
};
int main() {
    Solution sol;
    vector<int> nums1={55,30,5,4,2};
    vector<int> nums2={100,20,10,10,5};
    int ans=sol.maxDistance(nums1, nums2);
    cout << "Distance: "<< ans << endl;

    return 0;
}