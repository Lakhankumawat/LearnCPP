#include <iostream>
#include <cstring>
using namespace std;

//A size of hash table
#define SIZE 10

//A template for customer details
typedef struct{
    int custid;
    char custname[20];
    int custphone;
    int empty;
}CUST;


/*-------------------This fuction is used for generating hashing key--------------------------*/

int hashFunction(int key){
    return (key % SIZE);
}

/*---------------This function is used for inserting a record into the hash table------------------*/

void insertHT(CUST cust, CUST customers[]){
    int pos, flag = 0;
    pos = hashFunction(cust.custid);

    for(int i = 0; i < SIZE; i++){
        if(customers[pos].empty == 1){
            if(flag == 1){
                cout << "Collision resolved , new pos : " << pos << endl;
            }
            customers[pos].custid = cust.custid;
            strcpy(customers[pos].custname, cust.custname);
            customers[pos].custphone = cust.custphone;
            customers[pos].empty = -1;
            cout << "Record inserted into the Hash Table" << endl;
            return;
        }
        if(customers[pos].empty == -1){
            cout << "Collision detected" << endl;
            flag = 1;
        }
        pos = (pos + 1) % SIZE;
    }
   cout << "Table is full" << endl; 
}

/*---------------------This function is used for searching a data in the hash table------------------*/

int search(int key, CUST customers[]){
    int pos;
    pos = hashFunction(key);
    for(int i = 0; i < SIZE; i++){
        if(customers[pos].empty == 1)
            return -1;
        if(customers[pos].custid == key)
            return pos;
        pos = (pos + 1) % SIZE;
    }
    return -1;
}

/*------------------This function displays the Hash table-----------------------------------------*/

void display(CUST customers[]){
    cout << "HASH TABLE " << endl;

    for(int i = 0; i < SIZE; i++){
        printf("\n[%d] : \t", i);
        if(customers[i].empty == -1){
            printf("Customer - ID : %d  Customer name : %s   Customer phone : %d", customers[i].custid, customers[i].custname, customers[i].custphone);
            cout << endl;
        }
        else
            cout << "No Hash Entry" << endl;
            
    }
}


int main(){
    int ch, key, count;
    CUST customers[SIZE], cust;
    
    for(int i = 0; i < SIZE; i++)
        customers[i].empty = 1;

    while(1){
        
        cout << "\n1. Insert a record   2. Serach a record   3. Display all records    4. Exit" << endl;
        cout << "Enter your choice :  ";
        cin >> ch;

        switch(ch){
            case 1: cout << "Enter customer id, customer name, and customer phone number : " << endl;
                    cin >> cust.custid >> cust.custname >> cust.custphone;
                    insertHT(cust, customers);
                    break;
            
            case 2: cout << "Enter the key to search : " << endl;
                    cin >> key;
                    count = search(key, customers);
                    if(count == -1)
                        cout << "Record not found" << endl;
                    else
                        cout << "Record found at " <<  count << " position " << endl;
                    break;

            case 3: display(customers);
                    break;
            
            case 4: exit(0);
        }
    }

    return 0;
}
