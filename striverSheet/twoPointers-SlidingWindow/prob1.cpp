#include<bits/stdc++.h>
using namespace std;
vector<int> maxSumArr(vector<int> &arr, int &k){
    int n=arr.size();
    int l=0; int r=k-1;
    int x, y;
    int maxSum=INT_MIN;
    vector<int> result;
    while(r<n){
        int sum=0;
        for(int i=l; i<=r; i++){
            sum += arr[i];
        }
        if(sum>maxSum){
            maxSum=sum;
            x=l; y=r;
        }
        l++; r++;
    }
    for(int j=x; j<=y; j++) result.push_back(arr[j]);
    return result;
}

int main(){
    vector<int> arr={-1, 2, 3, 3, 4, 5, -1};
    int k=4;
    vector<int> ans=maxSumArr(arr, k);

    for(auto it:ans) cout << it << " "; 
    return 0;
}