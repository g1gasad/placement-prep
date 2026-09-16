#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int i=0, j=1;
        char ch=chars[i];
        while(i<n){
            int cnt=1;
            while(chars[j]==ch) {
                cnt++;
                j++;
            }
            
            i=j;

        }
    }
};
int main() {
    Solution sol;
    vector<char> chars={'a', 'b', 'b', 'b', 'b', 'b', 'b', 'b', 'b'};
    int ans=sol.compress(chars);
    cout << ans << endl;
    for(char ch:chars) cout << ch << " ";
    return 0;
}