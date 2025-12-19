#include <bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int> a, vector<int> b){
    vector<int> arr;
    int n1=a.size();
    int n2=b.size();
    int i=0; int j=0;
    while(i<n1 && j<n2){
        if(a[i]<b[j]) i++;
        else if(b[j]<a[i]) j++;
        else{
            arr.push_back(a[i]);
            i++; j++;
        }        
    }
    return arr;
}
int main() {
    vector<int> arr1={1, 2, 2, 3, 4, 5};
    vector<int> arr2={2, 3, 5, 6};
    vector<int> interArr=intersection(arr1, arr2);
    for(auto e:interArr) cout << e << " ";
    return 0;
}