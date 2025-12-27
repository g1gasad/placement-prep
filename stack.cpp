#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> scores;
    printf("Welcome to menu");
    printf("\n1. Add data\n2. Delete data\n3. Print data\n4. Exit");
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    switch(choice){
        case 1: {
            int val;
            cout << "Enter a value to push: ";
            cin >> val;
            scores.push(val);
        }
        case 2: scores.pop();
        case 3: cout << scores.top() << endl;
        case 4: 
    }
    return 0;
}