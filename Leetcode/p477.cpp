#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int bit=0; bit<32; bit++){
            int onesCount=0;
            for(int i=0; i<n; i++){
                if(nums[i] & (1 << bit)) onesCount++;
            }
            total += onesCount * (n - onesCount);
        }
        return total;
    }
};
int main() {
    vector<int> nums={4, 14, 2, 12};
    Solution sol;
    int total=sol.totalHammingDistance(nums);
    cout << total;
    return 0;
}