#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100];
    // printf("Enter a str: ");
    scanf("%s", str);
    int nums[10] = {0};
    int n;
    int str_len = strlen(str);
    for (int i=0; i<str_len; i++){
        n = str[i] - '0';
        if((n>=0) && (n<=9)){
            nums[n]++;
        }
    }
    
    for(int i=0; i<10; i++){
        printf("%d ", nums[i]);
    }
    // printf("%s", str);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
