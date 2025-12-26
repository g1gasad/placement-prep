#include <stdio.h>
int maximumDraws(int n) {
    return n+1;
}
int main(){
    int n;
    printf("Enter the no. of colors: ");
    scanf("%d", &n);
    int result = maximumDraws(n);
    printf("Max draws for success is %d", result);
    return 0;
}