#include <bits/stdc++.h>
using namespace std;
string reverseWords(string &s){
    int n=s.size();
    int i=n-1;
    string reverseWord;
    while(i>=0){
        int j=i;
        while(s[j]!=' '){
            j--;
        }
        string word=s.substr(j+1, i);
        reverseWord.append(word);
        reverseWord.push_back(' ');
        j--;
        i=j;

    }
    return reverseWord;
}
int main() {
    string s="welcome to the jungle";
    string ans = reverseWords(s);
    cout << ans;
    return 0;
}