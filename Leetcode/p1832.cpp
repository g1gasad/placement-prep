#include <bits/stdc++.h>
using namespace std;
bool ifPangram(string &sentence){
    int n=sentence.size();
    int hashh[26]={0};
    char ch;
    for(int i=0; i<n; i++){
        ch=sentence[i];
        hashh[ch-'a']++;
    }
    for(int j=0; j<26; j++){
        if(hashh[j]==0) return false;
    }
    return true;
}
int main() {
    string sentence="thequickbrownfoxjumpsoverthelazydog";
    if(ifPangram(sentence)) cout << "yep it is";
    else cout << "Nope";
    return 0;
}