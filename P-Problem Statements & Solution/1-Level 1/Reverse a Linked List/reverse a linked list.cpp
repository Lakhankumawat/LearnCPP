// Solution to a leetcode question link - https://leetcode.com/problems/reverse-linked-list/ 


//function to reverse a linked list
ListNode* reverseList(ListNode* head) {
        //if list is empty or contains only single node return the list itself
        if(!head || !head->next) return  head;
        //intialize two pointers prev and cur
        ListNode *prev=NULL,*cur=head;
        //traverse throught the linked list and link the cur to prev
        while(cur){
            ListNode* temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
        //cur will be pointing to NULL and hence we return prev
        return prev;
    }
