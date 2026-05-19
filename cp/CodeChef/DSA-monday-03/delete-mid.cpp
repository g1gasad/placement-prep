#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;

public:
    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* convertArr2LL(vector<int> &arr){
    if(arr.empty()) return nullptr;

    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

void printElement(Node* head){
    if(head == nullptr){
        cout << "empty head" << endl;
        return;
    }

    Node* temp = head;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* deleteMiddle(Node* head) {
    if(head->next==nullptr) return NULL;
    Node* slow = head;
    Node* fast = head;
    Node* prev = head;

    while (fast != NULL && fast->next != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    prev->next = slow->next;
    delete(slow);
    return head;
}
int main(){
    vector<int> arr = {1, 2, 5, 4, 9, 1, 6};

    Node* head = convertArr2LL(arr);
    printElement(head);
    Node* head1 = deleteMiddle(head);
    printElement(head1);

    return 0;
}