#include <iostream>
using namespace std;

/*------------------------Defining the Head and other node--------------------------------*/
typedef struct node{
    void* dataPtr;
    struct node* next;
}QUEUE_NODE;

typedef struct{
    QUEUE_NODE* front;
    QUEUE_NODE* rear;
    int count;
}QUEUE;

/*----------------------Creating the queue, means allocating the head node---------------------*/
QUEUE* createQUEUE(){
    QUEUE* queue;
    queue = (QUEUE*) malloc(sizeof(QUEUE));

    if(queue){
        queue -> front = NULL;
        queue -> rear = NULL;
        queue -> count = 0;
    }
    return queue;
}


/*-------------------This function inserts the new data into the queue----------------------*/
bool enqueue(QUEUE* queue, void* dataInPtr){
    QUEUE_NODE* newPtr;

    newPtr = (QUEUE_NODE*) malloc (sizeof(QUEUE_NODE));
    if(!newPtr)
        return false;
    
    newPtr -> dataPtr = dataInPtr;
    newPtr -> next = NULL;

    if(queue -> count == 0)
        queue -> front = newPtr;
    else
        queue -> rear -> next = newPtr;

    (queue -> count)++;
    queue -> rear = newPtr;
    return newPtr;
}


/*-------------------This function deltes the data from the queue-------------------------*/
void* dequeue(QUEUE* queue){
    QUEUE_NODE* deleteNode;

    if(queue -> count == 0)
        return NULL;

    void* dataOutPtr = queue -> front -> dataPtr;
    deleteNode = queue -> front;

    if(queue -> count == 1)
        queue -> rear = queue -> front = NULL;
    else    
        queue -> front = queue -> front -> next;

    (queue -> count)--;
    free(deleteNode);

    return dataOutPtr;
}


/*---------------------------This function returns the front data of the queue-------------------*/
void* queueFront(QUEUE* queue){
    if(!(queue -> front))
        return NULL;
    else{
        return queue -> front -> dataPtr;
    }
}


/*--------------------------This function return the rear data of the queue--------------------*/
void* queueRear(QUEUE* queue){
    if(!(queue -> rear))
        return NULL;
    else{
        return queue -> rear -> dataPtr;
    }
}


/*--------------------------This functions tells whether the queue is empty or not-------------------*/
bool emptyQueue(QUEUE* queue){
    return (queue -> count == 0);
}


/*--------------------------This function returns the elemets present in the queue--------------------*/
int queueCount(QUEUE* queue){
    return queue -> count;
}


/*-----------------------This function displays all the elements of the queue-----------------------*/
void disp(QUEUE* queue){
    int* a;

    if(!queue)
        cout << "Queue not exist" << endl;
    else{
        cout << "The queue elements are : " ;
        QUEUE_NODE* temp = queue -> front;

        while(temp -> next != NULL){
            a = (int*) (temp -> dataPtr);
            cout << *a << " -----> ";
            temp = temp -> next;
        }
        a = (int*) (temp -> dataPtr);
        cout << *a << endl;
    }
}

int main(){

    //For the sake of simplicity the program uses the integer data in the queue.
    //However the above funtions can be used for any data types 

    int ch, n;
    int* dataPtr;

    QUEUE* queue;
    
    queue = createQUEUE();

    //A menu driven program
    while(true){
        cout << endl;
        cout << "1. Enqueue the data  2. dequeue the data  3. Retrieve data at front  4. Retrieve data at rear  5. Check queue empty  6. Count the number of elements  7. Display queue   8. EXIT" << endl;
        cout << "Enter your choice : ";
        cin >> ch;

        switch(ch){
            case 1: cout << "Enter the data : ";
                    cin >> n;
                    dataPtr = (int*) malloc(sizeof(int));
                    *dataPtr = n;
                    enqueue(queue, dataPtr);
                    break;

            case 2: dataPtr = (int*) dequeue(queue);
                    if(!dataPtr)
                        cout << "No element in queue" << endl;
                    else
                        printf("Removed data is %d\n", *dataPtr);
                    break;

            case 3: dataPtr = (int*) queueFront(queue);
                    printf("Data at front of queue is %d\n", *dataPtr);
                    break;

            case 4: dataPtr = (int*) queueRear(queue);
                    printf("Data at rear of queue is %d\n", *dataPtr);
                    break;

            case 5: if(emptyQueue(queue))
                        cout << "Queue is empty" << endl;
                    else
                        cout << "Queue is not empty" << endl;
                    break;

            case 6: cout << "No. of elements in a queue is " << queueCount(queue) << endl;
                    break;

            case 7: disp(queue);
                    break;

            case 8: exit(0);
        }


    }
    return 0;
}