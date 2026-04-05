#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int count=0;
        for(int i=0; i<n; i++){
            int hash[3]={0};
            for(int j=i; j<n; j++){
                hash[s[j]-'a']=1;
                if(hash[0]+hash[1]+hash[2]==3) {
                    count = count + (n-j);
                    break;
                }
            }
        }
        return count;
    }
};
int main() {
    Solution sol;
    string s="abcabc";
    int ans=sol.numberOfSubstrings(s);
    cout << "substr count: " << ans << endl;
    return 0;
}