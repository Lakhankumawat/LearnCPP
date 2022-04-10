#include <iostream>
using namespace std;

/* ------------These defines the node and head definitions------------------*/
typedef struct node{
    void* dataPtr;
    struct node* link;
}STACK_NODE;

typedef struct{
    int count;
    STACK_NODE* top;
}STACK;

/*----------------This function creates new stack--------------------------*/
STACK* createStack(){
    STACK* stack;

    stack = (STACK*)malloc(sizeof(STACK));
    if(stack){
        stack -> count = 0;
        stack -> top = NULL;
    }
    return stack;
}

/*----------------This function pushes the data into the node--------------------------*/
bool pushStack(STACK* stack, void* dataIn){
    STACK_NODE* newPtr;

    newPtr = (STACK_NODE*)malloc(sizeof(STACK_NODE));
    if(!newPtr)
        return false;
    
    newPtr -> link = stack -> top;
    newPtr -> dataPtr = dataIn;
    
    stack -> top = newPtr;
    (stack -> count)++;

    return true;
}

/*----------------This function pops the data from the stack-----------------*/
void* popStack(STACK* stack){
    void* dataOutPtr;
    STACK_NODE* temp;

    if(stack -> count == 0)
        dataOutPtr = NULL;
    else{
        temp = stack -> top;
        dataOutPtr = stack -> top -> dataPtr;
        
        stack -> top = stack -> top -> link;
        
        free(temp);
        
        (stack -> count)--;
    }
    return dataOutPtr;
}



/*----------------This function retrieves stack top--------------------------*/
void* stackTop(STACK* stack){
    if(stack -> count == 0)
        return NULL;
    else
        return stack -> top -> dataPtr;
}

/*----------------This function checks whether the stack is empty-------------*/
bool emptyStack(STACK* stack){
    return (stack -> count == 0);
}

/*----------------This function return the stack count--------------------------*/
int stackCount(STACK* stack){
    return stack -> count;
}

/*----------------This function prints all the element sof the Stack----------*/
void display(STACK* stack){
    int* a = NULL;
    if(!stack)
        cout << "Stack Underflow" << endl;
    else   
        cout << "The stack elements are : " << endl;
        STACK_NODE* temp = stack -> top;
        while(temp -> link != NULL){
            a = (int*)(temp -> dataPtr);
            cout << *a << " ---> ";
            temp = temp -> link;
        }
        a = (int*)(temp -> dataPtr);
        cout << *a << endl;
}

int main(){
    int* dataPtr;
    
    STACK* stack;

    stack = createStack();

    //For the sake of simplicity the program uses the integer data in the stack.
    //However the above funtions can be used for any data types 
    
    int ch, n;
    while(true){
        cout << "1.Push an item  2.Pop an item  3.Retrieve stack top  4.Check empty  5.Stack count  6.Display  7.EXIT\n";
        cout << "Enter your choice : ";
        cin >> ch;
        switch(ch){
            case 1: cout << "Enter an item : ";
                    cin >> n;
                    dataPtr = (int*)malloc(sizeof(int));
                    *dataPtr = n;
                    pushStack(stack, dataPtr);
                    break;
            case 2: dataPtr = (int*) popStack(stack);
                    printf("Popped data is : %d\n", *dataPtr);
                    break;
            case 3: dataPtr = (int*) stackTop(stack);
                    printf("The stack top is : %d\n", *dataPtr);
                    break;
            case 4: if(!emptyStack(stack))
                        cout << "Stack is not empty" << endl;
                    else
                        cout << "Stack is empty" << endl;
                    break;
            case 5: cout << "The no.of elements is " << stackCount(stack) << endl;
                    break;
            case 6: display(stack);
                    break;
            case 7: exit(0);
        }
    }
    return 0;
}
