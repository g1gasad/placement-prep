#include <stdio.h>
void print10(int n){
    for(int i=0; i<2*n-1; i++){
        if(i<n){
            for(int p=0; p<=i; p++){
                printf("* ");
            }
        }
        else{
            for(int p=0; p<2*n-i-1; p++){
                printf("* ");
            }
        }
        printf("\n");
    }
}
void print11(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if((i+j)%2==0){
                printf("%d ", 1);
            }
            else{
                printf("%d ", 0);
            }
        }
    printf("\n");
    }
}
void print12(int n){
    for(int i=1; i<=n;i++){
        for(int j=1; j<=i; j++){
            printf("%d", j);
        }
        for(int k=1; k<=2*(n-i); k++){
            printf(" ");
        }
        for(int l=i; l>0; l--){
            printf("%d", l);
        }
        printf("\n");
    }
}
void print13(int n){
    int x=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%d ", x);
            x++;
        }
        printf("\n");
    }
}
void print14(int n){
    int charVal;
    for(int i=1; i<=n; i++){
        charVal = 65;
        for(int j=1; j<=i; j++){
            printf("%c ", charVal);
            charVal++;
        }
        printf("\n");
    }
}
void print15(int n){
    int charVal;
    for(int i=1; i<=n; i++){
        charVal = 65;
        for(int j=0; j<=n-i; j++){
            printf("%c ", charVal);
            charVal++;
        }
        printf("\n");
    }
}
void print16(int n){
    int charVal = 65;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            printf("%c", charVal);
        }
        charVal++;
        printf("\n");
    }
}




int main(){
    int num = 5;
    print16(num);
    return 0;
}