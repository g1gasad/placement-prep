#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

void printDivisors(int x){
    vector<int> ls;
    // O(sqrt(n))
    for(int i=1; i*i<=x; i++){
        if(x%i==0){
            ls.push_back(i);
            // cout<<i<<endl;
            if(i != (x/i)){
                ls.push_back(x/i);
                // cout<<x/i<<endl;
            }
        }
    }
    // O(n * log(n))
    sort(ls.begin(), ls.end());
    // O(n)
    for(auto it : ls) cout << it << " ";
}
// O(sqrt(n)) + O(nlogn) + O(n) = ?
int main(){
    int n;
    cout << "Enter a num: ";
    cin >> n;
    printDivisors(n);

    return 0;
}