#include <iostream>
using namespace std;

void print(int x){
    if(x==10){
        return;
    }
    cout << x <<endl;
    x++;
    print(x);
}
int main() {
    int cnt=0;
    print(cnt);
    return 0;
}