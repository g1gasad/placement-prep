#include <iostream>
using namespace std;
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
};

int main() {
    int n=10;
    int arr[] = {1, 2, 3, 1, 1, 6, 3, 2, 5, 1};
    int hasharr[n]={0};
    for(int i=0; i<n; i++){
        hasharr[arr[i]]++;
    }
    print(hasharr, n);  
    
    return 0;
}