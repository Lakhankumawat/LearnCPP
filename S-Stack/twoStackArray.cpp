#include <iostream>
using namespace std;

//This defines the size of an array
#define SIZE 50

//This is the array which is holding two stacks
int arr[SIZE];

//We will take two top notation for two stacks
int top_1 = -1;
int top_2 = SIZE;


/*----------------This function is used to push elements into stack 1--------------------------*/
void push_1(int data){
    
    if(top_1 < top_2 - 1){
        arr[++top_1] = data;
    }

    else
        cout << "Stack Overflow Error" << endl;
}


/*------------This function is used to push elements in stack 2-------------------------------*/
void push_2(int data){
    
    if(top_1 < top_2 - 1){
        arr[--top_2] = data;
    }

    else
        cout << "Stack Overflow" << endl;
}


/*------------This function pops the element from the stack 1----------------------------------*/
int pop_1(){
    
    if(top_1 >= 0)
        return arr[top_1--];
    
    else{
        cout << "Stack Underflow" << endl;
        return -1;
    }
}


/*-------------This function pops the element from the stack 2---------------------------------*/
int pop_2(){
    
    if(top_2 < SIZE)
        return arr[top_2++];
    
    else{
        cout << "Stack underflow" << endl;
        return -1;
    }
}


/*------------This function displys the contents of stack 1---------------------------------*/
void display_1(){
    if(top_1 == -1){
        cout << "Stack empty" << endl;
        return;
    }

    cout << "The Stack 1 elements are : ";
    
    for(int i = top_1; i > 0; i--)
        cout << arr[i] << " ---> ";
    cout << arr[0] << endl;
}


/*------------This function displays the contents of stack 2--------------------------------*/
void display_2(){

    if(top_2 == SIZE){
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "The Stack 2 elemnts are : ";

    for(int i = top_2; i < SIZE - 1; i++)
        cout << arr[i] << " ---> ";
    cout << arr[SIZE - 1] << endl;
}


int main(){
    int ch, data;

    while(true){
        
        cout << "\n1. Push into stack(1)  2. Push into stack(2)  3. Pop from stack(1)  4. Pop from stack(2)  5. Display stack(1)  6. Display stack(2)  7. EXIT" << endl;
        cout << "Enter your choice " ;
        cin >> ch;

        switch(ch){
            case 1: cout << "Enter the data to push : ";
                    cin >> data;
                    push_1(data);
                    display_1();
                    break;

            case 2: cout << "Enter the data to push : ";
                    cin >> data;
                    push_2(data);
                    display_2();
                    break;

            case 3: data = pop_1();
                    if(data != -1)
                        cout << "Popped data is : " << data << endl;
                    display_1();
                    break;

            case 4: data = pop_2();
                    if(data != -1)
                        cout << "Popped data is : " << data << endl;
                    display_2();
                    break;

            case 5: display_1();
                    break;

            case 6: display_2();
                    break;

            case 7: exit(0);           
        }
    }
    return 0;

}
