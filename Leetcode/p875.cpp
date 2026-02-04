#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findMax(vector<int> &arr){
        int maxi=INT_MIN;
        int n=arr.size();
        for(int i=0; i<n; i++){
            maxi=max(maxi, arr[i]);
        }
        return maxi;
    }
    long long calculateHours(vector<int> &piles, int hourly){
        long long totalH=0;
        int n=piles.size();
        for(int i=0; i<n; i++){
            totalH += (piles[i] + hourly - 1) / hourly;
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1; int high=findMax(piles);
        while(low<=high){
            int mid=(low+high)/2;
            int totalH=calculateHours(piles, mid);
            if(totalH<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
int main() {
    Solution sol;
    vector<int> piles={30,11,23,4,20};
    int h=5;
    int ans=sol.minEatingSpeed(piles, h);
    cout << ans;
    return 0;
}