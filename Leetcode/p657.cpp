#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool judgeCircle(string moves) {
        int n=moves.size();
        if(n==1) return false;
        pair<int, int> origin={0, 0};
        for(int i=0; i<n; i++){
            if(moves[i]=='U') origin.second++;
            else if(moves[i]=='D') origin.second--;
            else if(moves[i]=='L') origin.first--;
            else origin.first++;
        }
        if(origin.first==0 && origin.second==0) return true;
        return false;
    }
};
int main() {
    Solution sol;
    string moves="UDD";
    bool ans=sol.judgeCircle(moves);
    if(ans) cout << "ues";
    else cout << "np";
    return 0;
}