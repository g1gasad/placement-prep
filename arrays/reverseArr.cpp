#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int> &arr, int left, int right){
    int temp;
    for(int i=left; i<(left+right)/2; i++){
        temp=arr[left+i];
        arr[left+i]=arr[right-i];
        arr[right-i]=temp;
    }
};

int main() {
    vector<int> ls={1, 2, 3, 4, 5, 6, 7, 8};
    int n=ls.size();
    reverse(ls, 0, n-1);
    for(auto e:ls) cout << e << " ";
    return 0;
}