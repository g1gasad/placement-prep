#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int> C;
        int hasha[51]={0}, hashb[51]={0};
        hasha[A[0]]++; hashb[B[0]]++; 
        if(A[0]==B[0]) C.push_back(1);
        else C.push_back(0);

        for(int i=1; i)
    }
};
int main() {
    Solution sol;
    vector<int> a={1, 3, 2};
    vector<int> b={3, 2, 1};
    vector<int> c=sol.findThePrefixCommonArray(a, b);
    for(int x:c) cout << x << " ";
    return 0;
}