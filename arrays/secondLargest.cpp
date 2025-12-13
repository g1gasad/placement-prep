#include <bits/stdc++.h>
using namespace std;
int secondLargest(vector<int> *arr, int n){
    if(n>1){
        int larg, seclarg;
        larg = seclarg = (*arr)[0];
        for(int i=1; i<n; i++){
            if((*arr)[i]>larg){
                larg=(*arr)[i];
            }
        }
        for(int j=1; j<n; j++){
            if(((*arr)[j]>seclarg) && ((*arr)[j]!=larg)){
                seclarg=(*arr)[j];
            }
        }
        return seclarg;
    }
    else cout << "No second largest" << endl;
}
int main() {
    vector<int> ls = {3, 23, 9};
    int out = secondLargest(&ls, ls.size());
    cout << out << endl;
    return 0;
}