#include <bits/stdc++.h>
using namespace std;
int longestSubarraywithSumK(vector<int> a, long long k){
    map<long long, int> prefixSum;
    long long sum=0;
    int maxLen=0;
    for(int i=0; i<a.size(); i++){
        sum += a[i];
        if(sum==k){
            maxLen=max(maxLen, i+1);
        }
        long long rem=sum-k;
        if(prefixSum.find(rem)!=prefixSum.end()){
            int len = i - prefixSum[rem];
            maxLen = max(maxLen, len);
        }
        if(prefixSum.find(sum)!=prefixSum.end()){
            prefixSum[sum]=i;
        }
    }
    return maxLen;
}

int main() {

    return 0;
}