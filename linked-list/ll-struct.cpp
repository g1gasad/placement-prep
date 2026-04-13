#include <bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }

    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

int main() {
    vector<int> arr={2, 3, 5, 6};
// new creates a ptr and stores to y
    Node* y = new Node(arr[0], nullptr);
    cout << y->data;

// this creates an object y
    // Node y = Node(arr[0], nullptr);
    // cout << y.next;

    return 0;
}