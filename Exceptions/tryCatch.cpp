#include <bits/stdc++.h>
#include <typeinfo>

using namespace std;

int main() {
    try{
        float num=12.00;
        // cin >> num;
        // scanf("%f", &num);
        int x=num;
        if(x==num) cout << "Legit num "<< num <<endl;
        else throw(num);
    }
    catch(float mynum){
        cout << "access denied cuz\n";
        cout << "float num is " << mynum;
    }
    return 0;
}