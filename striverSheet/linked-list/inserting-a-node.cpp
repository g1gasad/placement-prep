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

Node* insertHead(Node* head, int val){
    Node* temp=new Node(val, head);
    return temp;
}
Node* insertTail(Node* head, int val){
    if(head==NULL) return new Node(val);
    Node* temp=head;
    Node* tail=new Node(val);
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=tail;
    return head;
}
Node* insertAtK(Node* head, int val, int k){
    if(head==NULL) return new Node(val);
    if(k<=0){
        cout << "----Invalid Posi----" << endl;
        return head;
    }
    if(k==1) return new Node(val, head);
    Node* temp=head;
    int pos=1;
    while(temp!=nullptr && pos<k-1){
        temp=temp->next;
        pos++;
    }
    if(temp==nullptr) {
        cout << "----Invalid Posi----" << endl;
        return head;
    }
    Node* newNode= new Node(val, temp->next);
    temp->next=newNode;
    return head;
}
Node* insertBeforeX(Node* head, int val, int x){
    if(head->data==x) new Node(val, head);
    Node* temp=head;
    while(temp!=nullptr){
        if(temp->next->data==x) break;            
        temp=temp->next;
    }

    if(temp==nullptr) {
        cout << "----Invalid X----" << endl;
        return head;
    }

    Node* newNode= new Node(val, temp->next);
    temp->next=newNode;
    return head;
}
int main() {
    vector<int> arr={2, 14, 1, 6, 21};
    Node* head=convertArr2LL(arr);
    printElement(head);
    // Node* head1=insertHead(head, 69);
    // printElement(head);
    // Node* head2=insertTail(head, 44);
    // printElement(head);
    // Node* head1=insertAtK(head, 33, 6);
    // printElement(head1);
    Node* head1=insertBeforeX(head, 99, 6);
    printElement(head1);

    return 0;
}