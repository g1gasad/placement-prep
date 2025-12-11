#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool checkPalindrome(int i, int n, char arr[]){
    if(i>n/2) return 1;
    char x = tolower(arr[i]);
    char y = tolower(arr[n-i-1]);
    if(((x >= 'a') && (x<='z')) || ((x >= '0') && (x<='9'))){
        cout << x;
        if(((y >= 'a') && (y<='z')) || ((y >= 0) && (y<=9))){
            if(x != y){
                return 0;
            }
        }
    }
    checkPalindrome(i+1, n, arr);
}
int main(){
    char str[] = "wH1aA1hW";
    // for(int i=0; i<8; i++) cout << str[i] << " ";
    int c = checkPalindrome(0, sizeof(str)-1, str);
    if(c) cout << "Palindrome"<<endl;
    else cout << "Nope"<<endl;

    return 0;

}