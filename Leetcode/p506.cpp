#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<pair<int, int>> hash;
        vector<string> ranks(n);
        for(int i=0; i<n; i++){
            hash.push_back({score[i], i});
        }
        sort(hash.begin(), hash.end(), greater<>());

        for(int i=0; i<n; i++){
            int idx=hash[i].second;
            if(i==0) ranks[idx]="Gold Medal";
            else if(i==1) ranks[idx]="Silver Medal";
            else if(i==2) ranks[idx]="Bronze Medal";
            else ranks[idx] = to_string(i+1);
        }
        return ranks;
    }
};
int main() {
    Solution sol;
    vector<int> score={5, 1, 3, 2, 4};
    vector<string> ans=sol.findRelativeRanks(score);
    for(string rank: ans) cout << rank << " -- ";
    return 0;
}