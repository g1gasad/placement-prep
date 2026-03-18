// roman to number
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s){
    unordered_map<char, int> mpp{
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    int n=s.size();
    if(n==1) return mpp[s[0]]; 

    int num=0;
    int i=0, j=1;
    while(i<n){
        if(mpp[s[i]]<mpp[s[j]]){
            // subtract for the given rules
            num += (mpp[s[j]] - mpp[s[i]]);
            i++;
            if(j==n-1) return num;
        }
        else{
            num += mpp[s[i]];
        }
        i++; j=i+1;
    }
    return num;
    }
};
int main() {
    vector<string> testVec = {"MCMXCIV", "CCI"};
    Solution sol;
    for(int i=0; i<testVec.size(); i++){
        int ans=sol.romanToInt(testVec[i]);
        cout << i+1 << ". roman " << testVec[i] << " is " << ans << endl;
    }
}