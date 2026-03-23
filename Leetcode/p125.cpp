#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int i=0; int j=n-1;
        while(i<=j){
            char a=s[i];
            char b=s[j];
            if((a>='a' && a<='z') || (a>='A' && a<='Z')){
                a = tolower(a);
            }

            if((b>='a' && b<='z') || (b>='A' && b<='Z')){
                b = tolower(b);
            }

            
        }
    }
};
int main() {
    string s = "A man, a plan, a canal: Panama";
    Solution sol;
    bool ans = sol.isPalindrome(s);
    if(ans) cout << "yass" << endl;
    else cout << "neop" << endl;
    return 0;
}