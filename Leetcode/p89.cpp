#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> seq;
        for(int i=0; i<(1<<n); i++){
            int code = i^(i>>1);
            seq.push_back(code);
        }
        return seq;
    }
};
int main() {
    Solution sol;
    int n=2;
    vector<int> ans = sol.grayCode(n);
    for(auto e:ans) cout << e << " ";
    return 0;
}