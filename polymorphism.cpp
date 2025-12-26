#include <bits/stdc++.h>
using namespace std;
class Payment{
protected:
    double amount;
public:
    Payment(double amt): amount(amt){}
    virtual void processPayment()=0;
};
int main() {

    return 0;
}