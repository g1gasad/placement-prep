#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
int maxCand(vector<int> &scores, int n, int x, int k){
    map<int, int, greater<int>> mpp;
    int maxCand=0;
    for(int i=0; i<n; i++){
        mpp[scores[i]]++;
    }
    for(int j=0; j<k; j++){
        if(maxCand<x){
            maxCand += mpp[j];

        }
        if(maxCand==x) return maxCand;
    }
    return 
}

};
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, X, K;
        cin >> N >> X >> K;
        vector<int> scores(N);
        for (int i = 0; i < N; i++) {
            cin >> scores[i];
        }
        Solution sol;
        int ans=sol.maxCand(scores, N, X, K);
        cout << ans << endl;
    }

    return 0;
}