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
        if(list1==NULL && list2==NULL) return NULL;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode* l1=list1;        
        ListNode* l2=list2;
        ListNode* dummy = new ListNode(-69);
        ListNode* temp=dummy;
        while(l1!=NULL || l2!=NULL){
            if(l1 && l2){
                if(l1->val <= l2->val){
                    temp->next=l1;
                    l1=l1->next;
                }
                else{
                    temp->next=l2;
                    l2=l2->next;
                }
            }
            else if(l1){
                temp->next=l1;
                l1=l1->next;
            }
            else{
                temp->next=l2;
                l2=l2->next;
            }
            temp=temp->next;
        }
        delete(l1);
        delete(l2);
        return dummy->next;
    }
};

int main(){
    vector<int> list1 = {2, 3};
    vector<int> list2 = {1, 4};
    ListNode* head1 = convertArr2LL(list1);
    ListNode* head2 = convertArr2LL(list2); 
    // printElement(head1);
    // printElement(head2);
    Solution sol;
    ListNode* ans=sol.mergeTwoLists(head1, head2);
    printElement(ans);
    return 0;
}