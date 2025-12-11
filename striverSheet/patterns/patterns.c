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
void print17(int n){
    for(int i=1; i<=n; i++){
        char ch = 'A';
        for(int sp=1; sp<=n-i; sp++){
            printf(" ");
        }
        for(int cp=1; cp<=2*i-1; cp++){
            if(cp<i){
                printf("%c", ch++);
                // charVal++;
            }
            else{
                printf("%c", ch--);
                }
            }
        for(int sp2=1; sp2<=n-i; sp2++){
            printf(" ");
        }
        printf("\n");
    }
}
void print18(int n){
    char ch;
    for(int i=1; i<=n; i++){
        ch = 'A';
        ch += n-i;
        for(int j=1; j<=i; j++){
            printf("%c", ch++);
        }
        printf("\n");
    }
}
void print19(int n){
    for(int i=1; i<=2*n; i++){
        if(i<=n){
            for(int j=1; j<=n-i+1; j++){
                printf("*");
            }
            for(int space=1; space<2*i-1; space++){
                printf(" ");
            }
            for(int j=1; j<=n-i+1; j++){
                printf("*");
            }
        }
        else{
            for(int j=1; j<=i-n; j++){
                printf("*");
            }
            for(int space=1; space<=2*(2*n-i); space++){
                printf(" ");
            }
            for(int j=1; j<=i-n; j++){
                printf("*");
            }
        }
        printf("\n");
    }
}
void print20(int n){
    for(int i=1; i<2*n; i++){
        if(i<=n){
            for(int j=1; j<=i; j++){
                printf("*");
            }
            for(int space=1; space<=2*(n-i); space++){
                printf("-");
            }
            for(int j=1; j<=i; j++){
                printf("*");
            }
        }
        else{
            for(int j=1; j<=2*n-i; j++){
                printf("*");
            }
            for(int space=1; space<=2*(i-n); space++){
                printf("-");
            }
            for(int j=1; j<=2*n-i; j++){
                printf("*");
            }
        }
        printf("\n");
    }
}
void print21(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if((i==1) || (i==n) || (j==1) || (j==n)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}
void print22(int n){
    #define MIN(a, b) (((a) < (b)) ? (a) : (b))
    for(int i=0; i<2*n-1; i++){
        for(int j=0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right = 2*n-2-j;
            int bottom = 2*n-2-i;
            int val = MIN(MIN(top, bottom), MIN(left, right));
            printf("%d ", n-val);
        }
        printf("\n");
    }
}

int main(){
    int num = 6;
    print22(num);
    return 0;
}