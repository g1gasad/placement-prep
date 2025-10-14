#include <stdio.h>
int reverseXOR(int n){
    int reverse=0;
    int digit;
    while(n){
        // digit = (n%10) ^ 1;
        digit  = n%10;
        // printf("%d\n", digit);
        reverse = (reverse*10) + digit;
        n = n/10;
    }
    return reverse;
}
int d2b(int n){
    int revans = 0;
    int rem, trueans;
    while(n){
        // quo = n / 2;
        rem = n % 2;
        printf("%d\n", rem);
        revans = revans*10 + rem;
        n = n/2;
    }
    printf("%d\n", revans);
    trueans = reverseXOR(revans);
    return trueans;
}
int main(){
    int num = 12;
    int bin = d2b(num);
    printf("base 2 of %d is %d", num, bin);
    return 0;
}