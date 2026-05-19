#include <bits/stdc++.h>
using namespace std;
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

Node* addTwoNumbers(Node* l1, Node* l2) {
    Node* temp1=l1;
    Node* temp2=l2;
    float num1=0; float num2=0;
    int i=0; int j=0;
    while(temp1!=NULL){
        num1 += temp1->data * pow(10.0, i);
        temp1 = temp1->next;
        i++;
    }
    while(temp2!=NULL){
        num2 += temp2->data * pow(10.0, j);
        temp2 = temp2->next;
        j++;
    }
    int sum=num1+num2;
    Node* head = new Node(sum%10);
    sum = sum/10;
    Node* mover=head;
    while(sum){
        Node* temp= new Node(sum%10);
        sum = sum/10;
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main(){
    vector<int> num1 = {9, 9};
    vector<int> num2 = {1, 0, 1};

    Node* head1 = convertArr2LL(num1);
    Node* head2 = convertArr2LL(num2);
    Node* head = addTwoNumbers(head1, head2);
    printElement(head);

    return 0;
}

