#include <bits/stdc++.h>
#include <cmath>
using namespace std;
vector<int> plusOne(vector<int>& digits) {
    float n=digits.size();
    int num=0;
    for(int i=0; i<n; i++){
        // giving here in pow
        num += digits[i] * pow(10.0, n-1-i);
    }
    cout << num << endl;
    num += 1;
    int temp=0;
    int k=0;
    while(num){
        temp = temp*10 + num%10;
        num=num/10;
        k++;
    }
    cout << k << endl;
    vector<int> result(k);
    for(int j=0; j++; j<k){
        result[j]=temp%10;
        temp=temp/10;
    }
    return result;
}
int main() {
    vector<int> digits={1, 2, 9};
    vector<int> result=plusOne(digits);
    for(auto it:result) cout << it << " ";
    return 0;
}