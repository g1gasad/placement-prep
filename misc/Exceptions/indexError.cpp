#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[4] ={1, 2, 3, 4};
    int n=4;
    int i;
    scanf("%d", &i);
    try{
        if(i<=n-1) cout << "element is " << arr[i];
        else throw(i);
    }
    catch(int x){
        cout << "Access denied\n";
        cout << x << " index is out of range";
    }
    return 0;
}