#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    pair<int, int> fullAdder(int &x, int &y, int &z){
        int sum = x ^ y ^ z;
        int carry = (x&y) | ((x^y)&z);
        return {sum, carry};
    }
    vector<int> addBinary(string a, string b) {
        int b1, b2;
        int n=a.size();
        int c=0;
        pair<int, int> sumResult;
        vector<int> arr(n);
        for(int i=n-1; i>=0; i--){
            b1 = a[i] - '0';
            b2 = b[i] - '0';
            cout << b1 << "-" << b2 << "   ";
            sumResult = fullAdder(b1, b2, c);
            // arr.push_back(sumResult.first);
            arr[i] = sumResult.first;
            cout << sumResult.first << "--" << sumResult.second << endl;
            c=sumResult.second;
        }
        if(c) arr.insert(arr.begin(), 1);
        else arr.insert(arr.begin(), 0);
        return arr;
    }
};
int main() {
    string a="1010"; 
    string b="0011";
    Solution sol;
    // string ans = sol.addBinary(a, b);
    vector<int> ans = sol.addBinary(a, b);
    for(auto it:ans) cout << it << " ";
    return 0;
}