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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL) return list1;
        if(list1==NULL && list2!=NULL) return list2;
        if(list2==NULL && list1!=NULL) return list1;
        ListNode* mover=list1;
        if(list1->val <= list2->val) 
            list1->next=list2;
        else list2->next=list1;
        mover=mover->next;
        

    }
};
int main(){
    vector<int> arr1 = {1, 2, 4};
    vector<int> arr2 = {1, 3, 4};
    ListNode* head1 = convertArr2LL(arr1);
    ListNode* head2 = convertArr2LL(arr2);
    printElement(head1);
    printElement(head2);

    return 0;
}