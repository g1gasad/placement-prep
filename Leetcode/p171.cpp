#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long titleToNumber(string columnTitle) {
        int n=columnTitle.size();
        long long colNum=0;
        if(n==1) return columnTitle[0]-'A'+1;
        for(int i=n-1; i>=0; i--){
            char ch = columnTitle[i];
            // cout << ch << " ";
            colNum = colNum + ((ch - 'A') + 1) * pow(26.0, n-1-i);
            // cout << colNum << " ";
        }
        return colNum;
    }
};

int main(){
    Solution sol;
    vector<string> cols={"AZ", "BA", "AAZ", "FXSHRXW"};
    for(int j=0; j<cols.size(); j++){
        long long ans = sol.titleToNumber(cols[j]);
        cout << ans << endl;
    }
    return 0;
}