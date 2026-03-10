#include <bits/stdc++.h>
using namespace std;
// naive soln working but need better

int maxPoints(vector<int> &arr, int &k){
    int n=arr.size();
    int l=0, r=k-1, i=0;
    int maxSum=0;
    while(i<n){
        int sum=0;
        for(int j=l; j<=r; j++){
            sum += arr[j%n];
        }
        cout << sum << endl;
        maxSum=max(maxSum, sum);
        l++; r++; i++;
    }
    return maxSum;
}
int main() {
    vector<int> arr = {6, 2, 3, 4, 7, 2, 1, 7, 1};
    int k=4;
    int ans=maxPoints(arr, k);
    cout << "Max is: " << ans << endl;
    return 0;
}