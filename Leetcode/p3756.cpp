#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    pair<long long, int> xAndSum(string &s, int i, int j){
        long long x=0;
        int sum=0;
        while(i<=j){
            if(s[i]!='0'){
                int d = s[i]-'0';
                sum += d;
                x = x*10 + d;
            }
            i++;
        }
        return {x, sum};
    }
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int tests=queries.size();
        int n=s.size();
        vector<int> arr;
        for(int q=0; q<tests; q++){
            int i=queries[q][0];
            int j=queries[q][1];
            pair<long long, int> result=xAndSum(s, i, j);
            long long answer = (result.first * result.second) % (1000000007);
            arr.push_back((int)answer);
        }
        return arr;
    }
};
int main() {
    Solution sol;
    string s="9876543210";
    vector<vector<int>> queries={{0, 9}, {1, 3}, {4, 6}};
    vector<int> ans=sol.sumAndMultiply(s, queries);
    for(int x:ans) cout << x << " ";
    return 0;
}