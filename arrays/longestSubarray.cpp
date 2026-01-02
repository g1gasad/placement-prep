#include <bits/stdc++.h>
using namespace std;
// int longestSubarraywithSumK(vector<int> a, long long k){
//     int maxLen=0;
//     int n=a.size();
//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             int sum=0;
//             for(int k=i; k<j; k++){
//                 sum += a[k];
//             }
//         if(sum==k) maxLen=max(maxLen, j-i);
//         }
//     }
//     return maxLen;
// }

// int longestSubarrayWithSumK(vector<int> a, long long k){
int longestSubarrayWithSumK(vector<int> a, long long k){
    int i, j;
    long long sum=0;
    i=j=0;
    int n=a.size();
    int maxLen=0;
    while(j<n){
        sum += a[j];
        while(i<=j && sum>k){
            sum -= a[i];
            i++;
        }
        if(sum==k){
            maxLen=max(maxLen, j-i+1);
        }
        j++;
    }
    return maxLen;
}

int main() {
    vector<int> arr={1, 2, 3, 1, 1, 1, 1, 4, 3};
    int result = longestSubarrayWithSumK(arr, 8);
    cout << "Max len is: " << result << endl;
    return 0;
}