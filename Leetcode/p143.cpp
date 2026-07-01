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
    ListNode* m = head;

    for(int i = 1; i < arr.size(); i++){
        ListNode* temp = new ListNode(arr[i]);
        m->next = temp;
        m = temp;
    }

    return head;
}

void printElement(ListNode* head){
    if(head == nullptr){
        cout << "empty head" << endl;
        return;
    }

    ListNode* temp = head;
    cout << "[ ";
    while(temp != nullptr){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << "]" << endl;
}
class Solution {
public:
    void reorderList(ListNode* head) {
        if(head->next==nullptr || head->next->next==nullptr) return;
        ListNode* f=head;
        ListNode* s=head->next;
        ListNode* m=head;
        while(m->next!=nullptr){
            if(m->next->next==nullptr){
                // cout << f->val << " " << m->val << endl;
                f->next=m->next;
                f->next->next=s;
                m->next=nullptr;
                // printf("f:%d | f->n:%d | s:%d | m:%d | m->n:%d\n", f->val, f->next->val, s->val, m->val, m->next->val);
                f=s;
                s=s->next;
                m=f;
                if(s==NULL) break;
            }
            m=m->next;
        }
    }
};
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 9, 12, 0};
    ListNode* head = convertArr2LL(arr);
    printElement(head);
    Solution sol;
    // ListNode* head1= sol.reorderList(head);
    sol.reorderList(head);
    printElement(head);
    return 0;
}