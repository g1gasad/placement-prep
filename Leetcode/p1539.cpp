#include <bits/stdc++.h>
using namespace std;
class Solution {
    public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int low=1; int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            int missing = arr[mid]-(mid+1);
            if(missing < k) low=mid+1;
            else high=mid-1;
        }
        return k+high+1;
    }
};
int main() {
    vector<int> arr={2,3,4,7,11};
    int k=5;
    Solution sol;
    int ans=sol.findKthPositive(arr, k);
    cout << ans << endl;
    return 0;
}
