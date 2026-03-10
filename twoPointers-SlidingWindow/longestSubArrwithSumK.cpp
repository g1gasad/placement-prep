#include <bits/stdc++.h>
using namespace std;
int longestSubArr(vector<int> &arr, int &k){
    int n=arr.size();
    int l=0, r=0;
    int maxLen=0;
    int sum=0;
    while(r<n){
        sum += arr[r];

        if(sum > k){
            sum -= arr[l];
            l++;
        }

        if(sum <= k){
            maxLen=max(maxLen, r-l+1);
        }
        r++;
    }
    return maxLen;
}

int main(){
    vector<int> arr= {2, 5, 10, -70, 10};
    int k=14;
    int ans=longestSubArr(arr, k);
    cout << "Longest SubArr is " << ans << endl;
    return 0;
}