#include <stdio.h>
void removeDuplicates(int arr[], int size, int k){
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    int num, nextnum;
    int newArr[k];
    for(int i=0; i<size; i++){
        num = arr[i];
        for(int j=i+1; j<size; j++){
            nextnum = arr[j];
            if(num!=nextnum){
                
            }
        }
    }
}


int main(){
    int nums[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int expected[] = {0, 1, 2, 3, 4};
    int k = 5;
    removeDuplicates(nums, 10);

    return 0;
}