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
bool hasCycle(ListNode *head) {
    if(head==NULL) return false;
    if(head->next==nullptr) return false;

    ListNode* slow=head;
    ListNode* fast=head;
    while (fast != nullptr && fast->next != nullptr){
        slow=slow->next;        
        fast=fast->next->next;
        if(slow == fast) return true;        
    }
    return false;
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5};

    ListNode* head = convertArr2LL(arr);
    printElement(head);
    head->next->next->next->next->next = head->next;
    bool ans = hasCycle(head);
    if(ans) cout << "Yup cycle";
    else cout << "no cycle";
    // printElement(head);
    return 0;
}