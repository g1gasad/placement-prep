#include <bits/stdc++.h>
#include <cmath>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
    int n=digits.size();
    int addOne=digits[n-1]+1;
    if(addOne<=9){
        digits[n-1] = addOne;
        return digits;
    }
    digits[n-1]=0;
    int carry=1;
    for(int i=n-2; i>=0; i--){
        int dSum=digits[i]+carry;

        if(dSum>9) carry=1;
        else carry=0;

        digits[i] = dSum % 10;
    }
    if(carry) digits.insert(digits.begin(), 1);
    return digits;
}

int main() {
    vector<int> digits={3, 9};
    vector<int> result=plusOne(digits);
    for(auto it:result) cout << it << " ";
    return 0;
}