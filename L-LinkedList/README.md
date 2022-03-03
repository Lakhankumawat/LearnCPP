
# 1) Implementing Queue using LinkedList


There are two general ways to implement Queue, one using conventional arrays 
and the other using LinkedList.

When an array is used, we have to specify the array size at the beginning,
so the size cannot be changed mid run, meaninng the queue will only work for
a limited number of elements and on top of that some memory will be left unused
which is not efficient when dealing with higher amounts of computing.

![Queue using LinkedList](https://i0.wp.com/learnersbucket.com/wp-content/uploads/2019/06/Enqueue-in-queue-using-linked-list-1.png?w=768&ssl=1).

Source : [learnersbucket.com](
https://i0.wp.com/learnersbucket.com/wp-content/uploads/2019/06/Enqueue-in-queue-using-linked-list-1.png?w=768&ssl=1).

### Proceedure

- Create New Node
- Set temp->data = n(value)
- If first then - Set front = rear = temp
- temp->next = NULL
- Else - Set rear->next = temp
- rear = temp
- End

//Custom Code ADD ON
//for menu driven program
```
bool loop = true;
    while(loop==true){
        cout<<"\n1 Insert\n2 Delete\n3 Display\n4 Exit\n"<<endl;
        int op, insertion = 0,inputs, i=0;
        cin>>op;
        switch(op){
            case 1:
                cout<<"Enter the number of insertions followed by the inputs"<<endl;
                cin>>insertion;
                while(i<insertion){
                    cin>>inputs;
                    Q.insert(inputs);
                    i++;
                }
                break;
            case 2:
                Q.deleteitem();
                break;
            case 3:
                Q.display();
                break;
            case 4:
                loop=false;
                break;
            default:
                cout<<"Invalid Input"<<endl;
            
        }
    }
```
### Properties
Time Complexity : O(n)
In-place : Yes
Stable : Yes
### Advantages
- Dyanmically allocated
- No memory wastage
### Disadvantage
- Requires more memory to store than array 
