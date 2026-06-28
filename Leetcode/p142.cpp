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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return NULL;
        int pos=-1;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=nullptr && fast->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                if(slow==head) return head;
                return slow->next;
            }; 
        }
        return nullptr;
    }
};
int main(){
    vector<int> arr={2, 4, 9, 11, 33};
    ListNode* head=convertArr2LL(arr);
    ListNode* one=new ListNode(1);
    ListNode* two=new ListNode(2);
    ListNode* three=new ListNode(3);
    ListNode* four=new ListNode(4);
    ListNode* five=new ListNode(5);
    one->next=two;
    two->next=three;
    three->next=four;
    four->next=five;
    five->next=two;
    // printElement(one);
    Solution sol;
    ListNode* ans=sol.detectCycle(one);
    cout << ans->val << endl;

    return 0;
}