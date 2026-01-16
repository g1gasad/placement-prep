#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isHappy(int n) {
        int temp=n, sqrSum;
        while(sqrSum!=1){
            sqrSum=0;
            while(temp){
                int dig=temp%10;
                sqrSum = sqrSum + (dig*dig);
                cout << sqrSum;
                temp = temp / 10;
            }
            temp=sqrSum;
        }
        if(sqrSum==1) return true;
        return false;
    }
};

int main() {
    Solution sol;
    bool ans = sol.isHappy(19);
    if(ans) cout << "ues";
    else cout << "noep";
    return 0;
}