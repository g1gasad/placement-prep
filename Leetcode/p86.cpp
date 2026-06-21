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
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL) return NULL;
        ListNode* dummy1=new ListNode(-69);
        ListNode* d2head=new ListNode(-169);
        ListNode* dummy2=d2head;
        ListNode* temp=head;
        while(temp!=NULL){
            ListNode* node=new ListNode(temp->val);
            if(temp->val<x){
                dummy1->next=node;
                dummy1=dummy1->next;
            }
            else{
                dummy2->next=node;
                dummy2=dummy2->next;
            }
            temp=temp->next;
        }
        dummy1->next=d2head->next;
        return dummy1->next;
    }
};
int main(){
    vector<int> arr = {1,4,3,2,5,2};
    ListNode* head = convertArr2LL(arr);
    int x=3;
    printElement(head);
    Solution sol;
    ListNode* ans=sol.partition(head, x);
    printElement(ans);
    return 0;
}