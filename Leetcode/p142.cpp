class ListNode{
public: 
    if(l1==NULL) return l2;
    if(l2==NULL) return l1;
    if(l1.val <= l2.val){
        l1.next=twosortedlist(l1.next, l2);
        return l1;
    }
    else{
        l2.next=twosortedlist()
    }

}