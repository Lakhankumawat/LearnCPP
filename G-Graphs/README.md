<!-- Table of content -->
# Table of content
- [Path Matrix](#path-matrix])
    - [Code](PathMatrix.cpp)
    - [Algorithm](#algorithm)
    - [Properties](#properties)
    - [Advantages](#advantages)
    - [Disadvantage](#disadvantage)


## Path Matrix

- Path Matrix tells us the is there exist a pth between two vertices of a graph . 
- By using adjacency matrix we get path matrix  .
- by multipling adjacency matrix to itself we get power matrix of 1 , 2, 3...n . wherwe n is the total number of vertex .
- so path matrix is adjacency matrix of power of its total vertex present in it .
- If all entries are 1 then graph is strongly connected .

<!-- image to help better explain the concept -->
![Path Matrix](https://www.researchgate.net/publication/313232993/figure/fig2/AS:457319269048322@1486044818348/Example-of-network-communicability-calculus-using-adjacency-matrices-Given-initial.png)
---
The path number in the path matrix is converted to 1 if atleast one path is present between two vertex .


### Algorithm

```

power_matrix(power , reesult)
{
    for (i : 1 to n) do
    { 
        for (j : 1 to n) do
        {
          result[i][j]=adj[i][j]
        }
    }
    for(k : 1 to p ) do
    {
        multiply(result,adj,tmp)
        for (i : 1 to n) do
        { 
            for (j : 1 to n) do
            {
            result[i][j]=tmp[i][j]
            }
        }
    }
}

```

### Properties

- Time Complexity : O(p(n^3)) ,where n is number of vertices

### Advantages

- Help to identify if there is a path or not . 

### Disadvantage

- time complexity is large
- Take more space .

---