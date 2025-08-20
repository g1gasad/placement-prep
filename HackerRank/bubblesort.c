#include <stdio.h>
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void bubblesort(int arr[], int n){
    int temp;
    for (int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            // printf("%d %d\n", j, j+1);
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int arr[] = {5, 7, 1, 9, 33, 69, -2, 0, 111, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, n);
    bubblesort(arr, n);
    printArray(arr, n);

    return 0;
}