#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node* back;
    Node(int data1, Node* next1, Node* back1) {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};
Node* convertArr2DLL(vector<int> arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for (int i = 1; i < arr.size(); i++) {
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void print(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* insertAtTail(Node* head, int k) {
    Node* newNode = new Node(k);
    if (head == nullptr) return newNode;

    Node* tail = head;
    while (tail->next != nullptr) {
        tail = tail->next;
    }
    tail->next = newNode;
    newNode->back = tail;
    return head;
}
Node* insertNodeBeforeHead(Node* head, int k){
    Node* newHead = new Node(k, head, nullptr);
    head->back=newHead;
    return newHead;
}
int main() {
    vector<int> arr = {2};
    Node* head = convertArr2DLL(arr);
    print(head);
    Node* head1 = insertNodeBeforeHead(head, 8);
    print(head1);
    return 0;
}