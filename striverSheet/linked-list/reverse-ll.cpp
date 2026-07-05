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
ListNode* reverseLL(ListNode* head){
    if(head==NULL || head->next==NULL) return head;
    ListNode* prev=nullptr;
    ListNode* mover=head;
    ListNode* nextNode=head->next;
    while(mover->next!=NULL){
        mover->next=prev;
        prev=mover;
        mover=nextNode;
        nextNode=nextNode->next;
    }
    mover->next=prev;
    return mover;
}
int main(){
    vector<int> arr = {12, 21, 2, 0};
    ListNode* head = convertArr2LL(arr);
    printElement(head);
    ListNode* head1=reverseLL(head);
    printElement(head1);
    return 0;
}