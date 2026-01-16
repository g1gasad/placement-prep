#include <bits/stdc++.h>
using namespace std;
int secondLargest(vector<int> *arr, int n){
    int largest=(*arr)[0];
    int sec=-1;
    for(int i=0; i<n; i++){
        if((*arr)[i]>largest){
            sec=largest;
            largest=(*arr)[i];
        }
        else if((*arr)[i]>sec) sec=(*arr)[i];
    }
    return sec;
}
int main() {
    vector<int> ls = {3, 23, 9, 12, 22, 2124, 99};
    int out = secondLargest(&ls, ls.size());
    cout << out << endl;
    return 0;
}