#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        for(int i=0; i<n; i++){
            unordered_set<int> st;
            for(int j=i; j<n; j++){
                st.insert(nums[j]);
                if(st.size()>k) break;
                
                if(st.find(nums[j])!=st.end())
                    if(st.size()==k) cnt++;

            }
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