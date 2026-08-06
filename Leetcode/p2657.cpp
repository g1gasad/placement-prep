#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size();
        vector<int> C(n);
        int hash_A[n+1]={0}, hash_B[n+1]={0};

        for(int i=0; i<n; i++){
            int cnt=0;
            hash_A[A[i]]++; 
            hash_B[B[i]]++;
            for(int j=0; j<=i; j++){
                if(hash_A[A[j]]==hash_B[B[j]]) cnt++;
            }
            C[i]=cnt;
        }
        return C;
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