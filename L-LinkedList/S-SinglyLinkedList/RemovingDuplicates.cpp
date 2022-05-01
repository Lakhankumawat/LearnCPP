#include <bits/stdc++.h>
using namespace std;
class ListNode{
   public:
      int val;
      ListNode *next;
      ListNode(int data){
         val = data;
         next = NULL;
      }
   };
   ListNode *make_list(vector<int> v){
      ListNode *head = new ListNode(v[0]);
      for(int i = 1; i<v.size(); i++){
         ListNode *ptr = head;
         while(ptr->next != NULL){
            ptr = ptr->next;
         }
         ptr->next = new ListNode(v[i]);
      }
      return head;
   }
   void print_list(ListNode *head){
      ListNode *ptr = head;
      cout << "[";
      while(ptr){
      cout << ptr->val << ", ";
      ptr = ptr->next;
   }
   cout << "]" << endl;
}
class Solution {
   public:
   ListNode* deleteDuplicates(ListNode* head) {
      ListNode* dummy = new ListNode(-1);
      ListNode* prev = NULL;
      ListNode* dummyPtr = dummy;
      ListNode* nextNode;
      while(head){
         if(!head->next || head->val != head->next->val){
            dummyPtr->next = head;
            ListNode* temp = head->next;
            head->next = NULL;
            head = temp;
            dummyPtr = dummyPtr->next;
         } else {
            prev = head;
            head = head->next;
            while(head && head->val == prev->val){
               prev = head;
               head = head->next;
            }
         }
      }
   return dummy->next;
   }
};
main(){
   Solution ob;
//    vector<int> v = {1,1,1,2,2,3,5,6,6,7,8};
   int n;
   cout<<"Enter the size of the vector"<<endl;
   cin>>n;
   vector<int> v(n);
   cout<<"Enter the elements of the vector";
   for (int i = 0; i < n; i++)
   {
       cin>>v[i];
   }
   

   ListNode *head = make_list(v);
   print_list(ob.deleteDuplicates(head));
}
