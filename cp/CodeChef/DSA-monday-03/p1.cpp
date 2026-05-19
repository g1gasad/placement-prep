#include <bits/stdc++.h>
using namespace std;
int borrowMoney(int X, int Y) {
    // write your code here 
    if(X<=Y) return 0;
    return X-Y;
}
int main() {
    int ans=borrowMoney(4, 4);
    cout << ans << endl;
    return 0;
}