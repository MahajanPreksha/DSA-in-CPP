# Heap/Binary Heap
Heap is a **complete binary tree** i.e. all levels will be filled completely, except may be the last level and the last level has keys as left as possible.

## Types of Binary Heap
A Heap can be of 2 types:
1. **Min Heap**: Parent node has smaller value than child nodes.
2. **Max Heap**: Parent node has larger value than child nodes.

## Representation of a Heap using an Array
1. Root node will be at index = 1.
2. For node at index i, left child will be at index = 2 * i and right child will be index = 2 * i + 1.
3. For node at index i, parent node will be at index = i/2.

### Heapify
It is the process of arranging nodes in the correct order so that they follow the properties of Min Heap or Max Heap.

> In binary heaps, leaf nodes start from n/2 + 1.
> Thus, last non-leaf or parent node is at n/2.z

## Heaps Questions
1. [Binary Heap Operations](https://www.geeksforgeeks.org/problems/operations-on-binary-min-heap/1)

2. []()