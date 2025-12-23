#include <bits/stdc++.h>
using namespace std;
void countOnes(vector<int> &arr){
    int n=arr.size();
    int count=0;
    int max=0;
    for(int i=0; i<n; i++){
        if(arr[i]==1) count++;
        else count=0;  
        if(count>max) max=count;
    }
    cout << max << endl;
}
int main() {
    vector<int> ones={1,1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 1};
    countOnes(ones);
    return 0;
}