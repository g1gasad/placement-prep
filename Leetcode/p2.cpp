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
private:
    int ifCarry(int value){
        if(value>9) return 1;
        else return 0;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum1 = (l1->val + l2->val);
        int carry = ifCarry(sum1);

        ListNode* head = new ListNode(sum1%10);
        l1=l1->next; l2=l2->next;
        ListNode* mover=head;
        
        while(l1!=NULL && l2!=NULL){
            int d=l1->val + l2->val + carry;
            // cout << d << endl;
            ListNode* temp= new ListNode(d%10);
            mover->next=temp;
            carry=ifCarry(d);
            l1=l1->next; 
            l2=l2->next;
            mover=mover->next;
        }
        while(l2!=NULL){
            int d = l2->val + carry;
            ListNode* temp= new ListNode(d%10);
            mover->next=temp;
            carry=ifCarry(d);
            l2=l2->next;
            mover=mover->next;
        }
        while(l1!=NULL){
            int d = l1->val + carry;
            ListNode* temp= new ListNode(d%10);
            mover->next=temp;
            carry=ifCarry(d);
            l1=l1->next;
            mover=mover->next;
        }
        if(carry){
            ListNode* temp = new ListNode(carry);
            mover->next=temp;
        }
        return head;
    }
};
int main(){
    vector<int> arr1 = {2, 4};
    vector<int> arr2 = {5, 6, 9, 9, 9, 9, 9, 9};
    ListNode* head1 = convertArr2LL(arr1);
    ListNode* head2 = convertArr2LL(arr2);

    printElement(head1);
    printElement(head2);

    Solution sol;
    ListNode* ans = sol.addTwoNumbers(head1, head2);

    printElement(ans);
    return 0;
}