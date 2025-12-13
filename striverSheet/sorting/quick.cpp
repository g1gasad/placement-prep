#include <bits/stdc++.h>
using namespace std;
int conquer(vector<int> *arr, int low, int high){
    int pivot = (*arr)[low];
    int i=low;
    int j=high;
    while(i<j){
        while((*arr)[i]<=pivot && i <=high-1){
            i++;
        }

        while((*arr)[j]>pivot && j >= low+1){
            j--;
        }

        if(i<j){
            swap((*arr)[j], (*arr)[i]);
        }
    }
    // swapping the pivot with elem at j
    swap((*arr)[low], (*arr)[j]);
    return j; 
};

void quickSort(vector<int> *arr, int low, int high){
    if(low<high){
        int pidx = conquer(arr, low, high);
        quickSort(arr, low, pidx-1);
        quickSort(arr, pidx+1, high);
    }

}

int main() {
    vector<int> ls = {4, 6, 2, 5, 7, 9, 1, 3};
    quickSort(&ls, 0, ls.size()-1);
    for(auto e:ls) cout << e << " ";
    return 0;
}