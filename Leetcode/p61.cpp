#include <bits/stdc++.h>
using namespace std;

class ListNode{
public:
    int val;
    ListNode* next;

public:
    ListNode(int val1, ListNode* next1){
        val = val1;
        next = next1;
    }

    ListNode(int val1){
        val = val1;
        next = nullptr;
    }
};

ListNode* convertArr2LL(vector<int> &arr){
    if(arr.empty()) return nullptr;

    ListNode* head = new ListNode(arr[0]);
    ListNode* mover = head;

    for(int i = 1; i < arr.size(); i++){
        ListNode* temp = new ListNode(arr[i]);
        mover->next = temp;
        mover = temp;
    }

    return head;
}

void printElement(ListNode* head){
    if(head == nullptr){
        cout << "empty head" << endl;
        return;
    }

    ListNode* temp = head;
    while(temp != nullptr){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
ListNode* rotateRight(ListNode* head, int k) {
    if(head==NULL || head->next==NULL || k==0) return NULL;
    ListNode* fast=head;
    ListNode* slow=head;
    ListNode* temp=head;
    int len=0;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }

    if(k==len || k%len==0) return head;
    int steps=k%len;

    while(steps && fast->next!=nullptr){
        fast=fast->next;
        steps--;
    }

    while(fast->next!=nullptr){
        fast=fast->next;
        slow=slow->next;
    }
    ListNode* newHead=slow->next;
    slow->next=nullptr;
    fast->next=head;
    return newHead;
}
int main(){
    vector<int> arr = {1, 2, 3};
    ListNode* head = convertArr2LL(arr);
    // printElement(head);
    // for(int k=0; k<5; k++){
        ListNode* head1 = rotateRight(head, 17); 
        printElement(head1);
    // }
    return 0;
}