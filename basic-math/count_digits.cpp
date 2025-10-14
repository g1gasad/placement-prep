#include <iostream>
using namespace std;

int countDigits(int x){
    int d=0;
    while(x){
        d++;
        x=x/10;
    }
    return d;
}
int main() {
    int num;
    cout << "Enter a num: ";
    cin >> num;
    cout << "The num of digits are " << countDigits(num) << endl; 
    return 0;
}