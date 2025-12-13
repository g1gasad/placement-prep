#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> *arr, int low, int mid, int high){
    vector<int> temp;
    // arr1 = [low -> mid]
    // arr2 = [mid+1 -> high]
    int left=low;
    int right=mid+1;
    while((left<=mid) && (right<=high)){
        if((*arr)[left]<=(*arr)[right]){
            temp.push_back((*arr)[left]);
            left++;
        }
        else{
            temp.push_back((*arr)[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back((*arr)[left]);
        left++;
    }
    while(right<=high){
        temp.push_back((*arr)[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
        (*arr)[i] = temp[i-low];
    }
}

void mergeSort(vector<int> *arr, int low, int high){
    if(low==high) return;
    int mid = (low+high)/2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid+1, high);
    merge(arr, low, mid, high);
};

int main(){
    vector<int> ls = {10, 12, 9, 4, 1, -69};
    int n=ls.size();
    mergeSort(&ls, 0, n-1);
    for(auto it:ls) cout << it <<" ";
    return 0;
}