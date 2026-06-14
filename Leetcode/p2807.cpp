#include <bits/stdc++.h>
using namespace std;

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
    int gcd(int a, int b){
        if(a==b) return a;
        int x;
        if(a>b) x=a/2;
        else x=b/2;
        for(int i=x; i>1; i--){
            if(a%i==0 && b%i==0){
                return i;
            }
        }
        return 1;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        ListNode* mover=head;
        while(mover->next != nullptr){
            int a=mover->val;
            int b=mover->next->val;
            int gcdVal=gcd(a, b);
            ListNode* temp=new ListNode(gcdVal, mover->next);
            mover->next=temp;
            mover=mover->next->next;
        }
        return head;
    }
};
int main(){
    vector<int> arr = {18};
    ListNode* head = convertArr2LL(arr);
    printElement(head);

    Solution sol;
    ListNode* head1=sol.insertGreatestCommonDivisors(head);
    printElement(head1);

    return 0;
}