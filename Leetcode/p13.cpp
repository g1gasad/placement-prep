// roman to number
#include <bits/stdc++.h>
using namespace std;
int romanToNumber(string &roman){
    map<char, int> mpp{
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };
    int n=roman.size();
    if(n==1) return mpp[roman[0]]; 

    int num=0;
    int i=0, j=1;
    while(j<n){
        if(mpp[roman[i]]<mpp[roman[j]]){
            // subtract for the given rules
            num += mpp[roman[j]] - mpp[roman[i]];
        }
        else{
            num += mpp[roman[i]];
        }
        i++; j++;
    }
    num += mpp[roman[j]];

    return num;
}

int main() {
    vector<string> testVec = {"XIX", "IV", "LM", "VII"};
    for(int i=0; i<testVec.size(); i++){
        int ans=romanToNumber(testVec[i]);
        cout << i+1 << ". Roman " << testVec[i] << " is " << ans << endl;
    }
}