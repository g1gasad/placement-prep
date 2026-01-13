#include <bits/stdc++.h>
using namespace std;

int reverseNum(int num){
    int reversed=0;
    int temp=num;
    while(temp){
        reversed = reversed*10 + temp % 10;
        temp /= 10;
    }
    cout << reversed << endl;
    return reversed;
}
bool isSameAfterReversals(int num) {
    int reversed1 = reverseNum(num);  
    int reversed2 = reverseNum(reversed1);
    if(num==reversed2) return true;
    return false;
}
int main() {
    int num=526;
    bool ans=isSameAfterReversals(num);
    if(ans) cout << "yes";
    else cout << "nope";
    return 0;
}