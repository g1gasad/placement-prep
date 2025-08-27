#include <stdio.h>
int binarySearch(int* ptr, int num, int low, int high){
    int mid = (low + high) / 2;
    if(num==*(ptr+mid)){
        return mid;
    }
    if(num<*(ptr+mid)){
        binarySearch(ptr, num, low, mid-1);
    }
    else if(num>*(ptr+mid)){
        binarySearch(ptr, num, mid+1, high);
    }
    else{
        return -1;
    }
}

int main(){
    int arr[] = {3, 6, 8, 11, 17, 34, 42, 57, 75, 90};
    int* arrptr = arr;
    int low, high, n;
    n = 34;
    low = 0;
    high = sizeof(arr)/sizeof(int) - 1;
    int index = binarySearch(arrptr, n, low, high);
    if(index==-1){
        printf("%d not in array", n);
    }
    else{
        printf("the index of %d is %d", n, index);
    }
    return 0;
}