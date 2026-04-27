#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

public:
    Node(int data1, Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }

    Node(int data1){
        data = data1;
        prev = nullptr;
        next = nullptr;
    }
};
pair<Node*, Node*> convertArr2LL(vector<int> &arr){
    if(arr.empty()) return {nullptr,nullptr};
    Node* tail;
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        temp->prev = mover;
        mover = temp;
    }
    tail = mover;
    return {head, tail};
}
void printElement(Node* head, Node* tail, bool reverse=false){
    if(head == nullptr && reverse==false){
        cout << "empty head" << endl;
        return;
    }
    if(tail==nullptr){
        cout << "empty tail" << endl;
        return;   
    }
    if(reverse){
        Node* temp=tail;
        while(temp!=nullptr){
            cout << temp->data << " ";
            temp=temp->prev;
        }
        cout << endl;
    }
    else{
        Node* temp = head;
        while(temp != nullptr){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }        
}
int main(){
    vector<vector<int>> arrs = {
        {},
        {23},
        {5, 7},
        {1, 2, 3, 4, 5},
        {4, 4, 4, 4},
        {-13, -4, -11, -555},
        {-2,0,4,-7,9},
        {1000000, 99999999, -88888888},
        
    };
    for(int i=0; i<arrs.size(); i++){
        cout << "Test case: " << i+1 << endl;
        pair<Node*, Node*> result = convertArr2LL(arrs[i]);
        // auto [head, tail] = convertArr2LL(arr);
        Node* head=result.first; 
        Node* tail=result.second;
        printElement(head, tail);
        printElement(head, tail, true);
        cout << "========end case===========" << endl;
    }

    return 0;
}