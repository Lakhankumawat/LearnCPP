#include <iostream>
using namespace std;

int main() {
    int index,deleted_element;
    int arr[]={}; //fill the array with items first !you can change the type of the array as you want it to be
//index is the number of element that you want to delete
    cin>>index;
    deleted_element=arr[index];
    for(index;index<10 ;index++){

        arr[index]=arr[index+1];
    }
    cout<<"deleted element is "<<deleted_element<<endl;
    return 0;
}
