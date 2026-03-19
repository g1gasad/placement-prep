#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        int n=s.size();
        int m=t.size();
        if(n!=m) return false;
        int hash[26]={0};
        for(int i=0; i<n; i++){
            char ch=s[i];
            hash[ch-'a']++;
        }
        for(int j=0; j<n; j++){
            char ch=t[j];
            if(hash[ch-'a']==0) return false;
            hash[ch-'a']--;
        }
        return true;
    }
};
int main() {
    string s= "anagram";
    string t= "nagaraa";
    Solution sol;
    bool ans = sol.isAnagram(s, t);
    if(ans) cout << "yes"<< endl;
    else cout << "no" << endl;
    return 0;
}