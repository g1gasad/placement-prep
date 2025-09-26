#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int x = 153423649;
    int temp = x;
    int reverse=0;
    while(temp){
        if((reverse>INT_MAX/10) || (reverse<INT_MIN/10)){
            reverse =  0;
            return;
        }
        reverse = reverse * 10;
        reverse = reverse + temp % 10;
        temp = temp / 10;
    }
    printf("%d", reverse);
    return 0;
}