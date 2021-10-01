//Pair with given sum in sorted doubly linked list
#include<iostream>
#include<vector>
#include<utility>
using namespace std;
typedef long long ll;

//Node structure in doubly linked list
class Node
{
    public:
        //value present in doubly linked list
        ll val;
        //next pointer will point to the next node in doubly linked list
        Node* next;
        //prev pointer will point to the previous node in doubly linked list
        Node* prev;
        //constructor to initialize node
        Node(ll val)
        {
            this->val=val;
            this->next=nullptr;
            this->prev=nullptr;
        }
};

//Function to insert a node in doubly linked list
void insert(Node** head, ll data)
{
    Node* temp=new Node(data);
    //Handling the case when the doubly linked list is emoty
    if(*head==nullptr)
        *head=temp;
    else
    {
        temp->next=*head;
        (*head)->prev=temp;
        *head=temp;
    }
}

//Function for shwoing the linked list
void show(Node* head)
{
    Node* h=head;
    while(h)
    {
        cout<<h->val<<"->";
        h=h->next;
    }
    cout<<"NULL"<<endl;
}

//Find pairs with given sum key
vector<pair<ll,ll>> findPair(Node* head, ll key)
{
    vector<pair<ll,ll>> ans;
    //l pointer will be at the starting of the list
    Node* l=head;
    Node* h=head;
    //h pointer will be at the ending of the list
    while(h->next)
        h=h->next;
    //checking whether l pointer will cross the h pointer
    while(l!=h && h->next!=l)
    {
        //if sum of value of l pointer and h pointer becomes key then the pair will be a possible answer
        if(l->val==key-(h->val))
        {
            ans.push_back({l->val,h->val});
            l=l->next;
            h=h->prev;
        }
        //if sum of value of l pointer and h pointer becomes less than key then we need to travel l pointer next to maximize the sum
        else if(l->val<key-(h->val))
            l=l->next;
        //if sum of value of l pointer and h pointer becomes more than key then we need to travel h pointer previous to minize the sum
        else
            h=h->prev;
    }
    //After finding all the pairs we retuen the vector of pairs
    return ans;
}

int main()
{
    Node* head=nullptr;
    ll key=7;
    // 1->2->3->4->5->6->7->8->9->NULL
    insert(&head, 9);
    insert(&head, 8);
    insert(&head, 7);
    insert(&head, 6);
    insert(&head, 5);
    insert(&head, 4);
    insert(&head, 3);
    insert(&head, 2);
    insert(&head, 1);

    //Printing the doubly linked list
    show(head);

    //Fetching all the pairs with given sum as key
    vector<pair<ll,ll>> ans=findPair(head,key);
    //Size of ans will be zero if no such pairs found
    if(ans.empty())
        cout<<"No pair found"<<endl;
    else
    {
        //Printing all possible pairs
        cout<<"All possible pairs with given sum as "<<key<<": "<<endl;
        for(auto x: ans)
            cout<<"("<<x.first<<","<<x.second<<")"<<endl;
    }

    return 0;
}