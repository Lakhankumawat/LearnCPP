# Linear Search (Sequential Search) :
1. Sequential Search algorithm is the simplest searching algorithm. 
2. In Sequential search, we simply traverse the list completely and match each element of the list with the item whose location is to be found. If the match is found, then the location of the item is returned; otherwise, the it returns NULL.

# Algorithm:

Step 1: Start

Step 2: Ask user for size of an array and elements present in an array.

Step 3: Then compare the element to be search
        If(a[i]==element)
		pos = i ; //It is the position in which we'll store the found element
		flag++ ; //If element is found then increase flag by 1

Step 4: flag will show the count or occurence of element if the 
        element is repeated

Step 5: Stop

![This is an image](https://media.geeksforgeeks.org/wp-content/cdn-uploads/Linear-Search.png)

# Properties:
Time complexity of Sequential Search: O(n)\
Space complexity of Sequential Search: O(1)

# Advantages:
1. Small arrays can be searched relatively quickly. 
2. Linear searching does not require an ordered list.
3. Linear search is not affected by insertions and deletions.


# Binary search :
1. Binary search is the search technique that works efficiently on sorted lists. Hence, we must ensure that the list is sorted. 
2. Binary search follows the divide and conquer approach in which the list is divided into two halves and the element is compared with the middle element of the list. If the match is found then, the location of the middle element is returned. Otherwise, we search into either of the halves depending upon the result produced through the match.


# Algorithm:

Step 1: Start

Step 2: Ask user for size of an array and elements present in an array.

Step 3: To sort the array we can use any sort algorithm, here we are 
        using Bubble Sort Algorithm

Step 4: l=0  //Left element in an array 
        r=n-1 //Right element in an array
		mid = (l+r)/2  //mid of an array
                                
Step 5: There are 3 possible cases -
        1) element == a[mid]  
		//It'll return the element

        2) element > a[mid]  
		//It'll return the left element on the side of mid
		l = mid +1;

        3) element < a[mid] 
		// It'll return the right element on the side of mid
		r = mid-1;

Step 6: Stop

![This is an image](https://media.geeksforgeeks.org/wp-content/uploads/20220309171621/BinarySearch.png)

        
# Properties:
Time complexity of Binary Search: O(log n)\
Space complexity of Binary Search: O(1)

# Advantage:
1. Binary search is much quicker and efficient than Linear search.

# Disadvantage:
1. Binary search requires more stack space.