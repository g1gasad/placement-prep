#include <stdio.h>
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void bubblesort(int* ptr, int n){
    int temp;
    int *p, *q;

    for (int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            // printf("%d %d\n", j, j+1);
            p = ptr + j;
            q = ptr + j + 1;
            if(*p > *q){
                temp = *p;
                *p = *q;
                *q = temp;
            }
        }
    }
}
int main(){
    int arr[] = {5, 7, 1, 9, 33, 69, -2, 0, 111, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int* ptr = arr;
    printArray(arr, n);
    bubblesort(ptr, n);
    printArray(arr, n);
    return 0;
}