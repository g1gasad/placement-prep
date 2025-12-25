#include <bits/stdc++.h>
using namespace std;
string checkPalindrome(string &str){
    int n=str.size();
    int i=0; int j=n-1;
    char ch1, ch2;
    while(i<=j){
        ch1=tolower(str[i]);
        ch2=tolower(str[j]);
        cout << ch1 << " " << ch2 << endl;
        if(ch1==' ') {
            i++;
            continue;
        }
        if(ch2==' '){
            j--;
            continue;
        }
        if(ch1!=ch2) return "No";
        i++; j--;
    }
    return "Yes";
}
int main() {
    string exp="abcddcbaa";
    string result = checkPalindrome(exp);
    cout << result << endl;
    return 0;
}