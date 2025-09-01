#include <stdio.h>
void printPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<5-i; j++){
            printf("%d ", j+1);
        }
        printf("\n");
    }
}

int main(){
    int nums[] = {4, 5, 10};
    // printf("enter n: ");
    // scanf("%d", &n);
    for(int q=0; q<3; q++){
        printPattern(nums[q]);
    }
    return 0;
}