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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return NULL;
        if(head->next==NULL && n==1) return NULL;
        int len=0;
        ListNode* t1=head;
        while(t1!=NULL){
            t1=t1->next;
            len++;
        }
        if(n==len) return head->next;

        ListNode* temp=head;
        ListNode* prev;
        int i=0;
        while(i < len-n){
            prev=temp;
            temp=temp->next;
            i++;
        }
        prev->next=temp->next;
        return head;
    }
};
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};
    int n=4;
    ListNode* head = convertArr2LL(arr);
    printElement(head);

    Solution sol;
    ListNode* ans=sol.removeNthFromEnd(head, n);
    printElement(ans);
    return 0;
}