#include <bits/stdc++.h>
using namespace std;
void bubble(vector<int>* vec, int n){
    for(int i=0; i<=n-1; i++){
        int didSwap=0;
        for(int j=0; j<=n-i-2; j++){
            if((*vec)[j]>(*vec)[j+1]){
                swap((*vec)[j], (*vec)[j+1]);
                didSwap=1;
                // for(auto element: *vec) cout << element << " ";
                // cout << endl;
            }
        }
        if(didSwap==0){
            break;
        }
    }
};


int main() {
    vector<int> ls = {10, 12, 9, 4, 1};
    for(auto element:ls) cout << element << " ";
    cout << endl;
    bubble(&ls, 5);
    for(auto element:ls) cout << element << " ";

    return 0;
}