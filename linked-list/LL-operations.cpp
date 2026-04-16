#include <bits/stdc++.h>
using namespace std;
class Node{
    public: int data; Node* next;
    public:
    Node(int data1, Node* next1){
        data=data1; next=next1;
    }
    Node(int data1){
        data=data1; next=nullptr;
    }
};
Node* convertArr2LL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1; i<arr.size(); i++){
        Node* temp= new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

Node* removeHead(Node* head){
    if(head==NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

Node* removeTail(Node* head){
    if(head==NULL || head->next==NULL) return NULL;
    Node* temp=head;
    while(temp->next->next != nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}

void printElement(Node* head){
    if(head==nullptr) cout << "empty head" << endl;
    Node* temp=head;
    while(temp->next != nullptr){
        cout << temp->data << " ";
        temp=temp->next;
    }
}

int main() {
    vector<int> arr={2, 4, 1, 69};
    Node* head=convertArr2LL(arr);
    cout << head->data << endl;
    printElement(head);
    
    return 0;
}