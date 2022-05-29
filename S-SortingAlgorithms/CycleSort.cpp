#include <iostream>
using namespace std;

void cycleSort(int arr[], int n)  
{  
    //All required variables initilized
    int counter = 0,start,elem,pos,temp,i;
    
    //Array elems are traversed to ensure that they are in correct positions
    //elem represents the initial point
    for (start = 0; start <= n - 2; start++) {  
        elem = arr[start];  
        
        //Smaller array elements to be shifted to the elem varaible's right
        //to maintain the sorted order of the final array
        pos = start;  
        for (i = start + 1; i < n; i++)  
            if (arr[i] < elem)  
                pos++;  
        if (pos == start)  
            continue; 
            
        //Ignore duplicate elements
        while (elem == arr[pos])  
            pos += 1;  
        //Element swapped to keep it at right position
        if (pos != start) {    
        temp = elem;  
        elem = arr[pos];  
            arr[pos] = temp;    
            counter++;  
        }  
        while (pos != start) {  
            pos = start;  
            for (i = start + 1; i < n; i++)  
                if (arr[i] < elem)  
                    pos += 1;  
            while (elem == arr[pos])  
                pos += 1;  
            if (elem != arr[pos]) {  
              temp = elem;  
          elem = arr[pos];  
              arr[pos] = temp;    
                counter++;  
            }  
        }  
    }
}

//Driver method
int main()  
{  
    //Taking input from the user
    cout<<"Enter the no. of elements in array:"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in array:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cycleSort(arr,n);
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++){
          cout << arr[i] << " ";
    }
    return 0;  
}  
