#include <bits/stdc++.h>
using namespace std;
int runstoMake(int x, int y, int z){
    if(y > x+z) return 0;
    else return x+z-y+1;
}

int main() {
    int x, y, z;
    // cout << "enter vals: ";
    scanf("%d %d %d", &x, &y, &z);
    int ans = runstoMake(x, y, z);
    cout << ans << endl;
    return 0;
}