#include <bits/stdc++.h>
using namespace std;
bool isAnagram(const string &s, const string &t) {
    int na=s.size();
    int nb=t.size();
    if(na!=nb) return false;
    int hasha[26]={0};
    int hashb[26]={0};
    int i=0;
    while(i<na){
        char cha = s[i];
        char chb = t[i];
        hasha[cha-'a']++;
        hashb[chb-'a']++;
        i++;
    }
    for(int j=0; j<26; j++){
        if(hasha[j]!=hashb[j]) return false;
    }
    return true;
    // cout << ;
}
int main() {
    vector<string> strs={"lixsen", "silent"};
    bool ans=isAnagram(strs[0], strs[1]);
    if(ans) cout << "anagram";
    else cout << "nope";
    return 0;
}