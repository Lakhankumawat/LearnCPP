#include <bits/stdc++.h>
using namespace std;

//https://www.geeksforgeeks.org/generic-treesn-array-trees/

// defining node 
class node{
    public:
    int data;
    vector<node*> children;

    node(int val){
        this->data=val;
    }

};

//function to create genric tree (n)
void creatingtree(node* &root,int arr[],int n){

   stack<node*> st;
   for(int i=0;i<n;i++){

   if(arr[i]==-1){
       st.pop();
   }

   else{
    node* newnode= new node(arr[i]);    
    
    

       if(st.size()>0){
           
         st.top()->children.push_back(newnode);
       }
       else{
           root=newnode;
       }
            st.push(newnode);
   }
}
}

// function to display the genric tree (n)
void display(node* root){
string str=to_string(root->data)+"->";
for(node*child:root->children){
    str +=to_string(child->data)+", ";
}
str+=".";
cout<<str<<endl;

for(node*child:root->children){
display(child);
}

}

int main(){
    node* root=NULL;
    
int arr[]={10,20,50,-1,60,-1,-1,30,70,-1,80,110,-1,120,-1,-1,90,-1,-1,40,100,-1,-1,-1};
int n=sizeof(arr)/sizeof(arr[0]);
creatingtree(root,arr,n);
display(root);
}
