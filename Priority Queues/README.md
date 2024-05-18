# Introduction
- It is an STL container which is used to implement **heap** data structure.
- Every element will have some priority.
- It is also a type of queue where front element will have the highest priority (either smallest or largest).

## Implementation and Syntax
```cpp
#include<queue> //header file
// priority_queue<datatype> pq;
priority_queue<int> pq1; //creates Max Heap by default
priority_queue<int, vector<int>, greater<int>> pq2; //creates Min Heap
```

## Insertion
```cpp
pq.push(1);
```
- Time Complexity: O(log N)

## Deletion
```cpp
pq.pop(); //Removes the front element
```
- Time Complexity: O(log N)

## Member functions of Priority Queue
- pq.top(): Returns the front element
- pq.size(): Returns the size of priority queue
- pq.empty(): Returns boolean value [1 if empty and 0 if not empty]

## Priority Queue Questions
1. [C++ STL Priority Queue](https://www.geeksforgeeks.org/problems/c-stl-priority-queue/1?page=1&category=priority-queue&sortBy=submissions)

2. [Kth largest element](https://www.geeksforgeeks.org/batch/dsa-self-paced-april/track/DSASP-Heap/problem/kth-largest-element5034) or [Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/description/)

3. [Kth smallest element](https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1)

4. [K Closest Points to Origin](https://leetcode.com/problems/k-closest-points-to-origin/description/)

5. [Minimum Cost of Ropes](https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1)

6. [Minimize the Sum](https://www.geeksforgeeks.org/problems/minimize-the-sum--170645/1?page=1&category=priority-queue&sortBy=submissions)

7. [K closest elements](https://www.geeksforgeeks.org/problems/k-closest-elements3619/1?page=1&category=priority-queue&sortBy=submissions) or [Find K Closest Elements](https://leetcode.com/problems/find-k-closest-elements/description/)

8. [Task Scheduler](https://www.geeksforgeeks.org/problems/task-scheduler/1) or [Task Scheduler](https://leetcode.com/problems/task-scheduler/description/)

9. [Find median in a stream](https://www.geeksforgeeks.org/problems/find-median-in-a-stream-1587115620/1) or [Find Median from Data Stream](https://leetcode.com/problems/find-median-from-data-stream/description/)