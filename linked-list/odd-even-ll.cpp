#include <bits/stdc++.h>
using namespace std;

class ListNode{
public:
    int val;
    ListNode* next;

public:
    ListNode(int val1, ListNode* nexodd){
        val = val1;
        next = nexodd;
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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        if(head->next->next==NULL) return head;
        ListNode* evenHead=head->next;
        ListNode* odd=head;
        ListNode* even=evenHead;
        while(odd->next!=NULL && odd->next->next!=NULL){
            odd->next=odd->next->next;
            even->next=even->next->next;
            odd=odd->next;
            even=even->next;
        }
        odd->next=evenHead;
        return head;
    }
};
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    ListNode* head = convertArr2LL(arr);
    printElement(head);
    Solution sol;
    ListNode* ans=sol.oddEvenList(head);
    printElement(ans);
    return 0;
}