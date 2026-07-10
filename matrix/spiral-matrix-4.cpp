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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> matrix(m, vector<int> (n, -1));
        int leftB=0, topB=0, bottomB=m, rightB=n;
        ListNode* current=head;

        while(leftB<rightB && topB<bottomB && current!=NULL){
            for(int i=leftB; i<rightB; i++){
                if(current==NULL) break;
                matrix[topB][i]=current->val;
                current=current->next;
            }
            topB++;
            for(int i=topB; i<bottomB; i++){
                if(current==NULL) break;
                matrix[i][rightB-1]=current->val;
                current=current->next;
            }
            rightB--;

            if(!(leftB<rightB && topB<bottomB)) break;
            
            for(int i=rightB-1; i>=leftB; i--){
                if(current==NULL) break;
                matrix[bottomB-1][i]=current->val;
                current=current->next;
            }
            bottomB--;

            for(int i=bottomB-1; i>=topB; i--){
                if(current==NULL) break;
                matrix[i][leftB]=current->val;
                current=current->next;
            }
            leftB++;
        }
        return matrix;
    }
};  
int main(){
    Solution sol;
    vector<int> arr = {3,0,2,6,8,1,7,9,4,2,5,5,0};
    ListNode* head = convertArr2LL(arr);
    // printElement(head);
    int m=3, n=5;
    vector<vector<int>> ans=sol.spiralMatrix(m, n, head);
    for(int r=0; r<m; r++){
        for(int c=0; c<n; c++){
            cout << ans[r][c] << " ";
        }
        cout << endl;
    }
    return 0;
}