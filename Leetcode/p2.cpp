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
    long long powerof10(int x){
        if(x==0) return 1;
        if(x==1) return 10;
        long long n=10;
        for(int i=1; i<x; i++){
            n = n*10;
        }
        return n;
    }
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long long num1=0, num2=0;
        int i=0; int j=0;
        while(l1 != NULL){
            int d=l1->val;
            // cout << d;
            num1 = powerof10(i)*d + num1;
            l1=l1->next;
            i++;
        }
        while(l2 != NULL){
            int d=l2->val;
            // cout << d;
            num2 = powerof10(j)*d + num2;
            l2=l2->next;
            j++;
        }
        long long sum = num1+num2;
        int dig=sum%10;
        ListNode* head=new ListNode(dig);
        sum=sum/10;
        ListNode* temp=head;
        while(sum){
            dig = sum%10;
            ListNode* newNode = new ListNode(dig);
            temp->next=newNode;
            temp=temp->next;
            sum /= 10;
        }
        return head;
    }
};
int main(){
    vector<int> arr1 = {2, 4, 3, 9, 9, 9, 9, 9, 9, 9, 9};
    vector<int> arr2 = {5, 6, 4};
    ListNode* head1 = convertArr2LL(arr1);
    ListNode* head2 = convertArr2LL(arr2);

    printElement(head1);
    printElement(head2);

    Solution sol;
    ListNode* ans = sol.addTwoNumbers(head1, head2);

    printElement(ans);
    return 0;
}