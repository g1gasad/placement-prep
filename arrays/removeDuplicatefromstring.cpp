#include <bits/stdc++.h>
using namespace std;
string removeDuplicate(string &s)
{
    bool notend=true;
    char ch;
    int i=0, j=0;
    // for(int i=1; i<n; i++){
    while(notend){
        if(s[i]=='\0'){
            notend=false;
        }
        if(s[i]!=s[j]){
            s[j+1]=s[i];
            j++;
        }
        i++;
    }

    return s.substr(0, j+1);
    // Write your code here
}

int main() {
    string str = "aaaabbccccccccccccccddd11122\0";
    string output = removeDuplicate(str);
    cout << output <<endl;
    return 0;
}