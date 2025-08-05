#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int p=0;
    int q=2*n-2;
    int temp=n;
  	// Complete the code to print the pattern.
    for (int i=0; i<2*n-1; i++){
        for (int j=0; j<2*n-1; j++){
            if((i==p) || (i==q) || (j==p) || (j==q)){
                printf("%d ", temp);
        }
    }
    printf("\n");
    }
    return 0;
}