<!-- Table of content -->

# Table of content
- [HashMaps](#HashMaps)
  - [Map](#Map)
    - [Implementation](#Implementation)
    - [Functions](#Functions)
  - [Multimap](#Multimap)
  - [UnorderedMap](#merge-sort)
  - [UnorderedMaps-CustomHashmaps-OperatorOverloading](#UnorderedMaps-CustomHashmaps-OperatorOverloading)

## HashMaps
---

## Map

- Map is a Data Structre which stores Key-value pair. 
- Map is a container 
- No two mapped values can have the same key values.
- Ordered Maps use Red Black Trees. 
- Maps are not contious Example it++ is allowed while it+1 is not.  
- All keys are unique if redeclaration happens the pair with that pre-existing key updates.

### Implementation

- Maps are implemented using Red-Black trees 
- A red-black tree is a kind of self-balancing binary search tree where each node has an extra bit, and that bit is often interpreted as the colour (red or black). 
- To read in depth about the Red-Black Tree : https://www.geeksforgeeks.org/red-black-tree-set-1-introduction-2/
<!-- image to help better explain the concept -->
![Red-Black-Tree-Implementation](https://user-images.githubusercontent.com/55507957/156937266-1891d44a-af23-4bfd-b829-2b7b3808c751.PNG)
<!-- citation : [Here](https://www.scaler.com/topics/cpp/map-in-cpp/)  -->

### Functions

- Maps contains many function but mainly begin(),end(),size(),empty(),find(),erase(),clear()
- begin() : Returns an iterator to the first element in the map.
- end() : Returns an iterator to the theoretical element that follows the last element in the map.
- size() : Returns the number of elements in the map.
<!-- image to help better explain the concept -->
![Map-size()](https://user-images.githubusercontent.com/55507957/156937331-d754e4a3-acae-4408-8523-42a9f7793ee8.PNG)
<!-- citation : [Here](https://www.scaler.com/topics/cpp/map-in-cpp/)  -->
- empty() : Returns whether the map is empty.
- erase(const g) : Removes the key-value ‘g’ from the map.
- clear() : Removes all the elements from the map.
- find() : Returns an iterator to the element with key-value ‘g’ in the map if found, else returns the iterator to end.
<!-- image to help better explain the concept -->
![Map-find()](https://user-images.githubusercontent.com/55507957/156937397-9b52020c-9d82-4338-8689-22f6b441d1d1.PNG)
<!-- citation : [Here](https://www.studytonight.com/cpp/stl/stl-container-map)  -->

- To read more on functions : https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/

## Multimap

---

## UnorderedMap

---

## UnorderedMaps-CustomHashmaps-OperatorOverloading

---





