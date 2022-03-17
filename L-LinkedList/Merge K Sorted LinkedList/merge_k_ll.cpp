#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

        Node(int data) {
            this->data = data;
            next = NULL;
        }
};

// function to take input for linked list and return the head pointer to the linked list
Node *takeInput(int n) {
    Node *head = NULL, *tail = NULL;
    for (int i=0; i<n; i++) {
        int data;
        cin>>data;
        Node *newNode = new Node(data);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = tail->next;
        }
    }
    return head;
}

// function to print linked list
void print(Node *head, int n, int k) {
    for (int i=0; i<n*k; i++) {
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

Node *merge(Node *list1, Node *list2) {
    // base cases
    if (list1 == NULL) return list2; 
    if (list2 == NULL) return list1;

    // choose either list1 or list2 and perform recursion
    Node *node = list1->data <= list2->data ? list1 : list2;
    node->next = list1->data <= list2->data ? merge(list1->next, list2) : merge(list1, list2->next);

    return node;
}

Node *merge_k_ll(Node *arr[], int last) {
    while (last != 0) { // loop until only one linked lisy is left
        int i = 0, j = last;

        while (i < j) { // (i, j) forms a pair
            arr[i] = merge(arr[i], arr[j]); // merge LinkedList i with LinkedList j and store merged list in LinkedList i

            i++; j--; // consider next pair
            
            if (i >= j) last = j; // if all pairs are merged, update last
        }
    }
    return arr[0];
}

int main() {
    int n; // number of elements in each linked lists
    int k; // number of linked lists
    cout<<"Enter the value of n and k: ";
    cin>>n>>k;

    cout<<"\n";
    Node *arr[n]; // array of pointers storing the head nodes of each linked lists
    for (int i=0; i<k; i++) {
        cout<<"Input linked list No."<< i+1 <<": ";
        arr[i] = takeInput(n);
    }

    Node *head = merge_k_ll(arr, k); // merge all linked lists

    cout<<"\nOutput: ";
    print(head, n, k); // print sorted linked list
    return 0;
}

// Test Case #1
// Input:
// n = 4, k = 3
// LinkedList1 = 1 3 5 7
// LinkedList1 = 2 4 6 8
// LinkedList1 = 0 9 10 11
// Output:
// 0 1 2 3 4 5 6 7 8 9 10 11

// Test Case #2
// Input:
// n = 3, k = 3
// LinkedList1 = 1 3 7
// LinkedList1 = 2 4 8
// LinkedList1 = 9 10 11
// Output:
// 1 2 3 4 7 8 9 10 11
