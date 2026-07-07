#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch){
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        return true;
    }
    return false;
}

string toGoatLatin(string sentence) {
    int n=sentence.size();
    string gl="";
    int i=0, j=1, idx=1;
    string word="";
    while(j<=n){
        
        if(!isVowel(sentence[j])){
            char ch=sentence[j];
            j++;
        }
        word += sentence[j];
        j++;
}
    return gl;
}
int main() {
    string sentence="The quick brown fox jumped over the lazy dog";
    string ans=toGoatLatin(sentence);
    cout << ans;
    return 0;
}