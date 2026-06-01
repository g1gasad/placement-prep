#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> nums;
        for(int i=left; i<=right; i++){
            if(i<10) nums.push_back(i);
            else if(i%5==0 && i%2==0) continue;
            else{
                int temp=i;
                bool isSelfD=true;
                while(temp){
                    int digit = temp % 10;
                    if(digit==0){
                        isSelfD=false;
                        break;
                    }
                    if(i % digit != 0) {
                        isSelfD = false;
                        break;    
                    }
                    temp = temp / 10;
                }
                if(isSelfD) nums.push_back(i);
            }
        }
        return nums;
    }
};
int main() {
    Solution sol;
    int left=1; int right=104;
    vector<int> ans = sol.selfDividingNumbers(left, right);
    for(auto e:ans) cout << e << " ";
    return 0;
}