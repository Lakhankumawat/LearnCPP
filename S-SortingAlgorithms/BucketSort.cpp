// Bucket Sort Program in C++
// Takes both whole numbers and floating point numbers as input
// Underlying sorting algorithm is Insertion Sory

#include <iomanip>
#include <iostream>
using namespace std;

#define NARRAY 10   // Array size
#define NBUCKET 6  // Number of buckets
#define INTERVAL 10  // Each bucket capacity

struct Node {
  double data;
  struct Node *next;
};

void BucketSort(double arr[]);
struct Node *InsertionSort(struct Node *list);
void print(double arr[]);
void printBuckets(struct Node *list);
int getBucketIndex(int value);
void showRes(double array[]);

// Sorting function
void BucketSort(double arr[]) 
{
  int i, j;
  struct Node **buckets;

  // Create buckets and allocate memory size
  buckets = (struct Node **)malloc(sizeof(struct Node *) * NBUCKET);

  // Initialize empty buckets
  for (i = 0; i < NBUCKET; ++i) 
  {
    buckets[i] = NULL;
  }

  // Fill the buckets with respective elements
  for (i = 0; i < NARRAY; ++i) 
  {
    struct Node *current;
    int pos = getBucketIndex(arr[i]);
    current = (struct Node *)malloc(sizeof(struct Node));
    current->data = arr[i];
    current->next = buckets[pos];
    buckets[pos] = current;
  }

  // Print the buckets along with their elements
  for (i = 0; i < NBUCKET; i++)
  {
    cout << "Bucket[" << i << "] : ";
    printBuckets(buckets[i]);
    cout << endl;
  }

  // Sort the elements of each bucket
  for (i = 0; i < NBUCKET; ++i)
  {
    buckets[i] = InsertionSort(buckets[i]);
  }

  cout << "-------------" << endl;
  cout << "Bucktets after sorted" << endl;
  for (i = 0; i < NBUCKET; i++)
  {
    cout << "Bucket[" << i << "] : ";
    printBuckets(buckets[i]);
    cout << endl;
  }

  // Put sorted elements on arr
  for (j = 0, i = 0; i < NBUCKET; ++i)
   {
    struct Node *node;
    node = buckets[i];
    while (node) {
      arr[j++] = node->data;
      node = node->next;
    }
 }

  for (i = 0; i < NBUCKET; ++i) {
    struct Node *node;
    node = buckets[i];
    while (node) {
      struct Node *tmp;
      tmp = node;
      node = node->next;
      free(tmp);
    }
  }
  free(buckets);
  return;
}

// Function to sort the elements of each bucket
struct Node *InsertionSort(struct Node *list)
{
  struct Node *k, *nodeList;
  if (list == 0 || list->next == 0) 
  {
    return list;
  }

  nodeList = list;
  k = list->next;
  nodeList->next = 0;
  while (k != 0) {
    struct Node *ptr;
    if (nodeList->data > k->data)
    {
      struct Node *tmp;
      tmp = k;
      k = k->next;
      tmp->next = nodeList;
      nodeList = tmp;
      continue;
    }

    for (ptr = nodeList; ptr->next != 0; ptr = ptr->next)
    {
      if (ptr->next->data > k->data)
        break;
    }

    if (ptr->next != 0)
    {
      struct Node *tmp;
      tmp = k;
      k = k->next;
      tmp->next = ptr->next;
      ptr->next = tmp;
      continue;
    } 
    else 
    {
      ptr->next = k;
      k = k->next;
      ptr->next->next = 0;
      continue;
    }
  }
  return nodeList;
}

int getBucketIndex(int value) 
{
  return value / INTERVAL;
}

// Print buckets
void print(double ar[]) 
{
  int i;
  for (i = 0; i < NARRAY; ++i) 
  {
    cout << setw(3) << ar[i];
    cout << " ";
  }
  cout << endl;
}

void printBuckets(struct Node *list) 
{
  struct Node *cur = list;
  while (cur) 
  {
    cout << setw(3) << cur->data;
    cout << " ";
    cur = cur->next;
  }
}

//For Printing onto Screen
void showRes(double array[])
{
  cout << "Initial array: " << endl;
  print(array);
  cout << "-------------" << endl;

  BucketSort(array);
  cout << "-------------" << endl;
  cout << "Sorted array: " << endl;
  print(array);
}

// Driver code
int main(void) 
{
  double Arr[NARRAY];
  double array[NARRAY] = {52, 46, 33, 86, 37, 47, 51, 18, 74, 21};
  cout << "For Sample Array" << endl;
  cout << "****************" << endl;
  showRes(array);
  
  cout << "Enter your array: (upto 7 elements)" << endl;
  cout << "*****************" << endl;
 
  cout<< endl;
  for (int i = 0; i < NARRAY; i++)
  {
    cout << "Enter element " << (i+1) <<":"<< endl;
    cin >> Arr[i];
  }
  showRes(Arr);
  return 0;
}

/* Sample Output:

For Sample Array
****************
Initial array:
 52  46  33  86  37  47  51  18  74  21
-------------
Bucket[0] :
Bucket[1] :  18
Bucket[2] :  21
Bucket[3] :  37  33
Bucket[4] :  47  46
Bucket[5] :  51  52
-------------
Bucktets after sorted
Bucket[0] :
Bucket[1] :  18
Bucket[2] :  21
Bucket[3] :  33  37
Bucket[4] :  46  47
Bucket[5] :  51  52
-------------
Sorted array:
 18  21  33  37  46  47  51  52  74  21
Enter your array: (upto 7 elements)
*****************

Enter element 1:
1.2
Enter element 2:
0.45
Enter element 3:
0.67
Enter element 4:
0.98
Enter element 5:
35.81
Enter element 6:
22.23
Enter element 7:
12.5
Enter element 8:
3.8
Enter element 9:
8.64
Enter element 10:
57.49
Initial array:
1.2 0.45 0.67 0.98 35.81 22.23 12.5 3.8 8.64 57.49
-------------
Bucket[0] : 8.64 3.8 0.98 0.67 0.45 1.2
Bucket[1] : 12.5
Bucket[2] : 22.23
Bucket[3] : 35.81
Bucket[4] :
Bucket[5] : 57.49
-------------
Bucktets after sorted
Bucket[0] : 0.45 0.67 0.98 1.2 3.8 8.64
Bucket[1] : 12.5
Bucket[2] : 22.23
Bucket[3] : 35.81
Bucket[4] :
Bucket[5] : 57.49
-------------
Sorted array:
0.45 0.67 0.98 1.2 3.8 8.64 12.5 22.23 35.81 57.49

*/
