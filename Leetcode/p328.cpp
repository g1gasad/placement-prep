#include <bits/stdc++.h>
#include<random>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
    public:
    ListNode* head;
    Solution(ListNode* head) {
        this->head=head;
    }
    
    int getRandom() {
        int ans;
        ListNode* temp=head;
        int n=0;
        while(temp!=NULL){
            temp=temp->next;
            n++;
        }
        delete(temp);

        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> distr(0, n-1);
        int rdIdxNum = distr(gen);

        ListNode* temp1 = head;
        for(int i=0; i<=rdIdxNum; i++){
            if(i==rdIdxNum){
                ans = temp1->val;
                break;
            };
            temp1 = temp1->next;
        }
        delete(temp1);
        return ans;
    }
};

int main() {

    return 0;
}//  * Definition for singly-linked list.
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */