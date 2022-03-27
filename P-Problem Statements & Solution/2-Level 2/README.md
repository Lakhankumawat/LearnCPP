
## Table of contents

[Flood Fill Problem Statement](#flood-fill-problem)

# FLOOD FILL PROBLEM

Problem Statement : 
In Flood Fill problem we have given a 2D array a[ ][ ] representing an image of size mxn with each value representing the color of the pixel at that co-ordinate. Also given the location or coordinates of a pixel and a color. Replace the color at a given location and all adjacent coordinates or locations with the same color as a given location with the given color. Print the array representing new colors in the image.





![App Screenshot](https://user-images.githubusercontent.com/80051436/159148488-3979497c-965b-4717-ad3c-b95e0bdf04a1.png)


##  Pseudo Code
```
we use the DFS approach

STEPS:
1.Initialize a 2D array a[ ][ ] of size mxn where m is equal to n representing an image in pixels form with each pixel representing it’s color.
2.Also initialize two co-ordinates x, y, and a newColor such that 0<x<m && 0<y<n.
3.Store the color at coordinates x and y in a variable prevColor.
4.Check if color at coordinates x and y i.e. prevColor is already equal to newColor, if so return.
5.Else update the color at coordinates x and y as a newColor.
6.Make four recursive calls to the function with valid co-ordinates among (x+1, y), (x-1, y), (x, y+1) and (x, y-1).
7.Valid coordinates: arr[i][j] is valid(eligible to change its color to newColor) if i>=0 and i<m and j>=0 and j<n and arr[i][j]==temp.
8.Print the updated 2D array.
```
## Time and Space Complexity
Time Complexity: O(n\*m) where n\*m represents Row*Column. i.e. number image pixels.

Auxiliary Space: O(1) because we don’t use any auxiliary space in implementation.

## My Outputs
![App Screenshot](https://user-images.githubusercontent.com/80051436/159154936-181e27a7-43ac-4201-968c-8427175f170a.png) 

![App Screenshot](https://user-images.githubusercontent.com/80051436/159154960-676d9a96-205e-4333-a6fd-d5ddeea479f1.png)