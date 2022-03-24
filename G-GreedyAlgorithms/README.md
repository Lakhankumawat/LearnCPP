<!-- Table of content -->
# Table of content
- [1.Fractional KnapSack](#OPEN-this-link-below-for-a-deatiled-summary-of-above-greedy-algorithms-✨)
- [2.Job Scheduling](#OPEN-this-link-below-for-a-deatiled-summary-of-above-greedy-algorithms-✨)
- [3.Busyman Problem](#OPEN-this-link-below-for-a-deatiled-summary-of-above-greedy-algorithms-✨)
- [Optimal Merge Pattern](#Optimal-Merge-Pattern)
    - [Implementation](OptimalMergePattern.cpp)
    - [Algorithm](#algorithm)
    - [Properties](#properties)
    - [Advantages](#advantages)


## OPEN this link below for a deatiled summary of above greedy algorithms ✨
[1.Fractional KnapSack](https://github.com/Lakhankumawat/LearnCPP/files/6333157/1906055_CS4403.pdf) 
<br>
 [2.Job Scheduling](https://github.com/Lakhankumawat/LearnCPP/files/6333157/1906055_CS4403.pdf) 
<br>
[3.Busyman Problem](https://www.spoj.com/problems/BUSYMAN/)


## Optimal Merge Pattern

- Optimal merging of two or more sorted files to make them a single file in minimum computations is called optical merge pattern
<!-- image to help better explain the concept -->
![Optimal-Merge-Pattern](https://i.pinimg.com/originals/ff/49/1a/ff491a0837b96115aab5c27926c42792.png)


### Algorithm

* Initialize total_computation=0
* creating minheap (insertin files size)
* merge untill priority queue is not empty
* store the weight of two smallest files in variables lweight ,rweight and pop them from the queue
* add their weights ,increase the total_computation with their weight and push it to queue as new node
* return count

### Properties

- O(files_pq.top)  =  O(1)
- O(files_pq.push)  =   O(logn)
- T(n) = (n – 1) * logn = O(nlogn) , where n is the total number of files

### Advantages

- Less number of computation rerqired.