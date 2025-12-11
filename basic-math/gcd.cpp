#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// int gcd(int x, int y){
//     int max = 1;
//     for(int i=2; i<=min(x, y); i++){
//         if((x%i==0) && (y%i==0)){
//             if(i>max){
//                     max=i;
//                 }
//             }
//         }
//     return max;
// }
int gcd(int x, int y){
    int m=1;
    for(int i=min(x, y); i>=1; i--){
        if((x%i==0) && (y%i==0)){
            m=i;
            break;
        }
    }
    return m;
}
int main(){
    int x=1225, y=100;
    int z = gcd(x, y);
    cout << "gcd is: " << z << endl;
    return 0;
}