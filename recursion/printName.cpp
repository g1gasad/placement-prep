#include <iostream>
using namespace std;
void print(int i, int n){
    if(i==n) return;
    print(i+1, n);
    cout << "dasa" << endl;
}
int main() {
    int i=0, n=5;
    print(i, n);
    return 0;
}