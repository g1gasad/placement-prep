#include <stdio.h>
void display(int* nums, int size){
    for(int i=0; i<size; i++){
        printf("%d ", *nums);
        nums++;
    }
    printf("\n");
}
int removeElement(int* nums, int numsSize, int val) {
    int index=0;
    for(int i=0; i<numsSize; i++){
        if (*(nums)==val){
            index++;
            printf("%d\n", nums);
            *nums = *(nums + index);
            // printf("%d ", *nums);
            nums++;
            printf("%d", nums);

        }
        
    }
    return 0;
}
int main(){
    int nums[] = {3, 2, 3, 4, 7, 5, 4, 3};
    int* ptr = nums;
    display(ptr, 8);
    removeElement(nums, 8, 3);
    display(ptr, 8);
    return 0;
}