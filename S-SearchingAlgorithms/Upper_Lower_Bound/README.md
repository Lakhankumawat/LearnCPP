## Lower Bound of an element
If an element is present in a SORTED array, Lower Bound of the element will return the index of the same element.
If an element is not present in a SORTED array, Lower Bound of the element will return the index of the next greater element.

## Upper Bound of an element
##### Upper bound always returns the index of the element which is just greater than the original element, whether it is present in the SORTED array or not.

## Algorithm for implementing Lower Bound
•	Initialise the startIndex as 0 and endIndex as N – 1.
•	Compare the given element(K) with the middle element(say arr[mid]) of the array.
•	If the middle element is greater equals to K then update the endIndex as a middle index(mid).
•	Else Update startIndex as mid + 1.
•	Repeat the above steps until startIndex is less than endIndex or until the difference of endIndex and startIndex is greater than 1.
•	After all the above steps the startIndex is the lower_bound of K in the given array.

## Algorithm for implementing Upper Bound
•	Initialise the startIndex as 0 and endIndex as N – 1.
•	Compare K with the middle element(say arr[mid]) of the array.
•	If the middle element is less than equals to K then update the startIndex as middle index + 1(mid + 1).
•	Else Update endIndex as mid.
•	Repeat the above steps until startIndex is less than endIndex or until the difference of endIndex and startIndex is greater than 1.
•	After all the above steps the startIndex is the upper_bound of K in the given array.
