#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n=arr.size();
        int left=0, right=0;
        int sum=0;
        while(left<n){
            sum += arr[right];
            while(sum<target){
                right ++;
                sum += arr[right];
            }
            sum -= arr[left];
            left++;
        }
    }
};
int main() {
    Solution sol;
    vector<int> arr={3, 2, 2, 4, 3};
    int target=4;
    int ans=sol.minSumOfLengths(arr, target);
    cout << ans << endl;
    return 0;
}