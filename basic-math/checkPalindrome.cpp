#include <iostream>
using namespace std;
int checkPalindrome(int x){
    int rev=0, temp=x;
    while(temp){
        rev = rev*10 + temp%10;
        temp=temp/10;
    }
    // cout << rev;
    if (rev==x){
        return 1;
    }
    else{
        return 0;
    };
}
int main() {
    int num=1331;
    // cout << "Enter num: ";
    // cin >> num;
    if(checkPalindrome(num)){
        cout << "yep" << endl;
    }
    else{
        cout << "nope" << endl;
    }

    return 0;
}