#include <iostream>
using namespace std;
int oddEven(int n){
    if(n%2==0){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int x, y;
    // cout << "Enter value of x: ";
    cin >> x >> y;
    cout << "The value of x: " << x << " and y: " << y;

    // if(oddEven(x)){
    //     cout << "The number " << x << " is Odd";
    // }
    // else{
    //     cout << "The number " << x << " is even";
    // }
    return 0;
}