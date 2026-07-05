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
    ListNode* current = head;

    for(int i = 1; i < arr.size(); i++){
        ListNode* temp = new ListNode(arr[i]);
        current->next = temp;
        current = temp;
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

ListNode* reverseBetween(ListNode* head, int left, int right){
    if(head==NULL || head->next==NULL || left>right) return head;    
    
    ListNode dummyNode(-69, head);
    ListNode* beforeGroup=&dummyNode;
    ListNode* current=head;

    for(int n=1; n<left; n++){
        beforeGroup=current;
        current=current->next;
    }
    ListNode* groupTail=current;
    ListNode* prev=nullptr;
    
    for(int i=left; i<=right; i++){
        ListNode* nextNode=current->next;
        current->next=prev;
        prev=current;
        current=nextNode;
    }
    groupTail->next=current;
    beforeGroup->next=prev;

    return dummyNode.next;
}
int main(){
    vector<int> arr = {2, 0, 1, 9, 8, 4, 7, 3};
    ListNode* head = convertArr2LL(arr);
    printElement(head);
    int left=5, right=2;
    ListNode* head1 = reverseBetween(head, left, right);
    printElement(head1);
    return 0;
}