#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool squareIsWhite(string coordinates) {
        int ch=coordinates[0]-'a'+1;
        int num=coordinates[1] - '0';
        if((ch&1 && num&1) || ((ch%2==0) && (num%2==0))) return false;
        else return true;
    }
};
int main() {
    Solution sol;
    vector<string> cors={"a2", "h3", "b4", "a6"};
    for(int i=0; i<cors.size(); i++){
        bool ans=sol.squareIsWhite(cors[i]);
        if(ans) cout << "white" << endl;
        else cout << "black" << endl;
    }
    return 0;
}