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
bool reversableAhead(ListNode* headSubgroup, int k){
    int currNodes=1; 
    bool canProceed=false;
    ListNode* mover=headSubgroup;
    while(mover!=NULL){
        if(currNodes==k){
            canProceed=true;
            break;
        } 
        mover=mover->next;
        currNodes++;
    }
    return canProceed;
}
ListNode* reverseKGroup(ListNode* head, int k) {
    if(!head || head->next==nullptr) return head;

    ListNode* current=head;
    ListNode* prev=nullptr;
    vector<ListNode*> nodes;
    while(current!=NULL){
        ListNode* newGroupTail=current;
        ListNode* newGroupHead=current;
        if(!reversableAhead(current, k)) break;
        // if(reversableAhead(current, k)){
        prev=nullptr;
        for(int i=1; i<=k; i++){
            ListNode* nextNode=current->next;
            current->next=prev;
            prev=current;
            current=nextNode;
        }
        newGroupHead=prev;
        // printf("head: %d | tail: %d\n", newGroupHead->val, newGroupTail->val);
        // }
        nodes.push_back(newGroupHead);
        nodes.push_back(newGroupTail);
    }
    nodes.push_back(current);
    for(int i=1; i<nodes.size(); i=i+2){
        nodes[i]->next=nodes[i+1];
    }
    return nodes[0];
}
int main(){
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    ListNode* head = convertArr2LL(arr);
    printElement(head);
    ListNode* head1 = reverseKGroup(head, 5);
    printElement(head1);
    return 0;
}