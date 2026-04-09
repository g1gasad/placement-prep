#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMostSubArr(nums, k) - atMostSubArr(nums, k-1);
    }

private:
    int atMostSubArr(vector<int> &nums, int k){
        int n=nums.size();
        int cnt=0;
        unordered_map<int, int> mpp;
        int l=0, r=0;
        while(r<n){
            mpp[nums[r]]++;
            while(mpp.size()>k){
                mpp[nums[l]]--;
                if(mpp[nums[l]]==0) mpp.erase(nums[l]);
                l++;
            }
            cnt += (r-l+1);
            r++;
        }
        return cnt;
    }
};

int main() {
    Solution sol;
    vector<vector<int>> nums={{1, 2, 1, 2, 3}, {1, 2, 1, 3, 4}};
    vector<int> k={2, 3};
    for(int i=0; i<k.size(); i++){
        int ans=sol.subarraysWithKDistinct(nums[i], k[i]);
        cout << "subarrs are: " << ans << endl;
    }

    return 0;
}