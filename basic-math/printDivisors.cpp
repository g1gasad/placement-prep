#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x=36;

    for(int i=1; i<=sqrt(x); i++){
        if(x%i==0){
            cout<<i<<endl;
            if(i != (x/i)){
                cout<<x/i<<endl;
            }
        }
    }


    // cout<<"yo ssup"<<endl;

    return 0;
}