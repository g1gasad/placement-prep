#include <bits/stdc++.h>
using namespace std;
string commonPrefix(vector<string> &strs){
    int i=0;
    int n=strs.size();
    bool loopOn=true;
    char ch1, ch2;
    while(loopOn){
        ch1=strs[0][i];
        if(ch1=='\0') loopOn=false;
        for(int j=1; j<n; j++){
            ch2=strs[j][i];
            if(ch2=='\0') loopOn=false;
            if(ch1!=ch2) loopOn=false;
        }
        i++;
    } 
    return strs[0].substr(0, i-1);
    // cout << "val of i " << i-1 << endl;
    // cout << strs[0].substr(0, i-1) <<  endl;
}
int main() {
    vector<string> strs={"flower","fower","flow"};
    string output = commonPrefix(strs);
    cout << output << endl;
    return 0;
}