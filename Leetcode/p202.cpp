#include <bits/stdc++.h>
using namespace std;
class Solution {
private:
    int sumofsqr(int x){
        int sum=0;
        while(x){
            int d=x%10;
            sum += d*d;
            x /= 10; 
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        vector<int> hashSet;
        int result=sumofsqr(n);
        hashSet.push_back(result);

        while(result!=1){
            result=sumofsqr(result);
            for(int i=0; i<hashSet.size(); i++){
                if(result==hashSet[i]) return false;
            }
            // cout << result << endl;
            hashSet.push_back(result);
        }
        return true;
    }
};

int main() {
    Solution sol;
    bool ans = sol.isHappy(21);
    // if(ans) cout << "yes";
    // else cout << "noep";
    return 0;
}