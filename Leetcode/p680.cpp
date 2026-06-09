#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool validPalindrome(string s) {
        int n=s.size();
        int i=0, j=n-1;
        bool dtd=false;
        while(i<j){
            while(i<j && !(s[i]>='a' && s[i]<='z')) i++;
            while(i<j && !(s[j]>='a' && s[j]<='z')) j--;

            if(s[i] != s[j]){
                cout << s[i] << "--!!!--" << s[j] << endl;
                if(dtd) return false;
                if(s[i+1]==s[j]){
                    dtd=true;
                    i++;
                } 
                else if(s[i]==s[j-1]){
                    dtd=true;
                    j--;
                }
                else return false;
            }
            printf("%c ---- %c\n", s[i], s[j]); 
            i++; j--;
        }
        return true;
    }
};
int main(){
    Solution sol;
    string s="aguokepatgbnvfqmgmlcupuufxoohdfpgjdmysgvhmvffcnqxjjxqncffvmhvgsymdjgpfdhooxfuupuculmgmqfvnbgtapekouga";
    bool ans = sol.validPalindrome(s);
    if(ans) cout << "Yup" << endl;
    else cout << "Nope" << endl;
    return 0;
}