#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main(){
    string s="abdacaieoffef";
    
    int hash[26]={0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a']++;
    }
    
    int q;
    cout << "Enter number of q: ";
    cin >> q;
    while(q--){
        char c;
        cout << "Enter char: ";
        cin >> c;
        printf("Freq of %c is %d\n", c, hash[c-'a']);
    }

    return 0;
}