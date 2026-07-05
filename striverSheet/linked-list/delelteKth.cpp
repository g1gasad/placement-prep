#include <bits/stdc++.h>
using namespace std;
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
void printNodes(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout << endl;
}
Node* deleteKth(Node* head, int k){
    if(head==NULL) return head;
    // delete head if k is given as 1
    if(k==1){
        Node* temp=head;
        head=head->next;
        delete(temp);
        return head;
    }

    Node* temp=head;
    Node* prev;
    int i=1;
    while(temp!=NULL){
        if(k==i){
            prev->next=prev->next->next;
            delete(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
        i++;
    }
    return head;
}
Node* deleteVal(Node* head, int val){
    if(head==NULL) return head;
    Node* temp=head;
    if(head->data==val){
        head=head->next;
        delete(temp);
        return head;
    }

    Node* prev;
    while(temp!=NULL){
        if(temp->data==val){
            prev->next=prev->next->next;
            delete(temp);
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}
int main() {
    vector<int> arr={2, 4, 1, 69};

    Node* head=convertArr2LL(arr);
    printNodes(head);

    // Node* head1=deleteKth(head, 3);
    // printNodes(head1);
    Node* head2=deleteVal(head, 2);
    printNodes(head2);

    return 0;
}
