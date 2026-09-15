#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n=arr1.size();
        int m=arr2.size();
        int cnt=0;
        for(int i=0; i<n; i++){
            bool addCnt=true;
            for(int j=0; j<m; j++){
                if(abs(arr1[i] - arr2[j]) <= d){
                    printf("abs(%d - %d) = %d\n", arr1[i], arr2[j], abs(arr1[i] - arr2[j]));
                    addCnt=false;
                    break;
                };
            }
            if(addCnt) cnt++;
        }
        return cnt;
    }
};
int main() {
    Solution sol;
    vector<int> arr1={1,4,2,3};
    vector<int> arr2={-4,-3,6,10,20,30};
    int d=3;
    int ans=sol.findTheDistanceValue(arr1, arr2, d);
    cout << ans << endl;

    return 0;
}