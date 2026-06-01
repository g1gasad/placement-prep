#include <bits/stdc++.h>
using namespace std;
string removeDuplicate(string &s)
{
    bool endofstr=false;
    char ch;
    int i=1, j=0;
    // for(int i=1; i<n; i++){
    while(!endofstr){
        if(s[i]=='\0'){
            endofstr=true;
        }
        if(s[j]!=s[i]){
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