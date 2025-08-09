#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n=4;
    // scanf("%d", &n);
    int temp=n;
    int p, q;
    for(int i=0; i<2*n-1; i++){
      for(int j=0; j<2*n-1; j++){
        if((i==0) || (i==2*n-1) || (j==0) || (j==2*n-2)){
          printf("%d ", temp);
        }
        else{
          temp = n - 1;
          printf("%d ", temp);
        }
      }
      printf("\n");
    }
  	// Complete the code to print the pattern.
    return 0;
}