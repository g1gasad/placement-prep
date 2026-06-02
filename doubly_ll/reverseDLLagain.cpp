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
Node* reverseDLL(Node* head){
    Node* current=head;
    Node* prev=NULL;

    while(current != NULL){
        prev = current->back;
        current->back = current->next;
        current->next = prev;
        current = current->back;
    }

    return prev->back;
}
int main() {
    vector<int> arr={3, 5, 1, 7, 10};
    Node* head = convertArr2DLL(arr);
    print(head); cout << endl;
    Node* revHead = reverseDLL(head);
    print(revHead);
    return 0;
}