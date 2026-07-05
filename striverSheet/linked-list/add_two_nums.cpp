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

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    ListNode* t1=l1;
    ListNode* t2=l2;
    ListNode* dummy = new ListNode(-1);
    ListNode* curr = dummy;
    int carry=0;

    while(t1!=NULL || t2!=NULL){
        int sum=carry;

        if(t1) sum += t1->val;
        if(t2) sum += t2->val;
        carry = sum / 10;

        ListNode* node = new ListNode(sum%10);
        curr->next=node;
        curr=curr->next;
        if(t1) t1=t1->next;
        if(t2) t2=t2->next;
    }
    if(carry){
        ListNode* carryNode= new ListNode(carry);
        curr->next=carryNode;
    }
    return dummy->next;
}

int main(){
    vector<int> num1 = {3, 5};
    vector<int> num2 = {4, 5, 9, 9};

    ListNode* head1 = convertArr2LL(num1);
    ListNode* head2 = convertArr2LL(num2);
    // printElement(head2);
    ListNode* head3=addTwoNumbers(head1, head2);
    printElement(head3);
    return 0;
}