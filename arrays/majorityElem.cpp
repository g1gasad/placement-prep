#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    // int majorityElement(vector<int>& nums) {
    //     int n=nums.size();
    //     int max=0;
    //     for(int i=0; i<n; i++){
    //         int cnt=0;
    //         int x=nums[i];
    //         for(int j=0; j<n; j++){
    //             if(nums[j]==x){
    //                 cnt++;
    //             }
    //         }
    //         if(cnt>n/2){
    //             return x;
    //         }
    //     }
    //     return -1;
    // }
    int majorityElement(vector<int> &nums){
        int n=nums.size();
        int cnt=0;
        int i=0;
        int x=nums[i];
        while(i<n){
            if(nums[i]==x) cnt++;
            else cnt--;
            i++;
            if(cnt==0) x=nums[i];
        }
        return x;    
    }
};


int main() {
vector<int> arr= {2,2,1,1,1,2,2};
Solution sol;
int ans = sol.majorityElement(arr);
cout << "majority elem is: " << ans << endl;
return 0;
}