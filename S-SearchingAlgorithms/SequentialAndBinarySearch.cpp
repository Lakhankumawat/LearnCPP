/*
In Sequential(Linear) search, we simply traverse the list completely and match each element of the list 
with the element whose location is to be found. If the match is found, then the location of 
the element is returned; otherwise it'll say "element not found".

Binary search follows the divide and conquer approach in which the list is divided into two halves 
and the element is compared with the middle element of the list. If the match is found then,
the location of the middle element is returned. Otherwise, we search into either 
of the halves depending upon the result produced through the match.
There are 3 possible cases -
1) element == a[mid] -> It'll return the element
2) element > a[mid] -> It'll return the left element on the side of mid
3) element < a[mid] -> It'll return the right element on the side of mid

*/


#include<iostream>
#include<stdlib.h>

using namespace std;

void LinearSearch(int a[] , int n , int element);  //Declaring function of Linear Search
void BinarySearch(int a[] , int n , int element);  //Declaring function of Binary Search

int a[100] , element , n , ch , pos , i , j , temp , flag=0 , r , l , mid ;

int main()
{
    do
    {
        std::cout<<"\n-------MENU-------"<<std::endl;
        std::cout<<"\n1.Linear Search \n2.Binary Search \n3.Exit"<<std::endl;
        std::cout<<"\nEnter your choice : "<<std::endl;
        std::cin>>ch;
        
        switch(ch)
        {
            case 1: std::cout<<"\n--------Linear Search--------"<<std::endl;
            LinearSearch(a,n,element);  //Calling function
            break;
            
            case 2: std::cout<<"\n--------Binary Search--------"<<std::endl;
            BinarySearch(a,n,element);   //Calling function
            break;
            
            case 3:
            exit(0);
            break;
        }
    }
    while(ch<3);

    return 0;
}

//Defining function for Linear Search
void LinearSearch(int a[] , int n , int element)
{
    std::cout<<"\nEnter the size of an array : "<<std::endl;
    std::cin>>n;
    std::cout<<"\nEnter the elements in an array : "<<std::endl;
    
	//For printing elements in an array
	for(i=0 ; i<n ; i++) 
    {
        std::cin>>a[i];
    }
    
    std::cout<<"\nEnter the element to be found : "<<std::endl;
    std::cin>>element;
    
	//To search the element by comparing array with the element to be searched
    for(i=0 ;i<n ;i++)
    {
        if(a[i]==element)
        {
			pos=i;   //It is the position(index) in which we'll store the found element
            flag++;  //If element is found then increase flag by 1
            std::cout<<"\nElement found at index "<<pos<<std::endl;
        }
    }
 
    if(flag!=0)
        std::cout<<"\nOccurence : "<<flag<<std::endl; //It'll show the occurence of element if the element is repeated in an array
    else
        std::cout<<"Element not found"<<std::endl;   //If element is not present in an array
}

//Defining function for Binary Search
void BinarySearch(int a[] , int n , int element)
{
    std::cout<<"\nEnter the size of an array : "<<std::endl;
    std::cin>>n;
    std::cout<<"\nEnter the elements in an array : "<<std::endl;
    for(int i=0 ; i<n ; i++)
    {
        std::cin>>a[i];
    }
    
    //For sorting the array
    for(i=0 ; i<n-1 ; i++)
    {
        for(j=0 ; j<n-1-i ; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
	//Printing sorted array
    std::cout<<"\nArray after sorting : "<<std::endl;
    for(i=0 ; i<n ; i++)
    {
        std::cout<<"\t"<<a[i]<<std::endl;
    }
  
    std::cout<<"\nEnter the element to be found : "<<std::endl;
    std::cin>>element;

    l=0 , r=n-1 , mid = (l + r)/2;
  
    while(l<=r)
    {
        mid = (l + r)/2;
		
        if(element==a[mid])
        {
            std::cout<<"\nElement is present at index "<<mid<<std::endl;
            break;
        }
        else if(element > a[mid])
        {
            l = mid +1; //l = low
        }
        else
        {
            r = mid-1; //r = high
        }
    }

    if(l>r)  
    {  
        std::cout<<"\nElement not found"<<std::endl;  //If element is not present in an array 
    }
}


/*
Output:

-------MENU-------

1.Linear Search 
2.Binary Search 
3.Exit

Enter your choice : 
1

--------Linear Search--------

Enter the size of an array : 
10

Enter the elements in an array : 
8 4 1 7 3 2 6 5 7 9       

Enter the element to be found : 
7

Element found at index 3

Element found at index 8

Occurence : 2

-------MENU-------

1.Linear Search 
2.Binary Search 
3.Exit

Enter your choice : 
2
--------Binary Search--------

Enter the size of an array : 
6
Enter the elements in an array : 
9 6 8 2 4 1
Array after sorting : 
	1
	2
	4
	6
	8
	9

Enter the element to be found : 
9
Element is present at index 5

Enter your choice : 
3
*/