# Introduction
- Heap is a **complete binary tree** i.e. all levels will be filled completely, except may be the last level and last level has keys as left as possible.
- They can be either Min Heap or Max Heap.
- **Min Heap**: Parent node has smaller value than child nodes.
- **Max Heaps**: Parent node has larger value than child nodes.

## Representation of a Heap using an Array
1. Root node will be at index = 1.
2. For node at index i, left child will be at index = 2 * i and right child will be index = 2 * i + 1.
3. For node at index i, parent node will be at index = i/2.

## Insertion in a Heap
- Height of a complete binary tree = log N
- Time Complexity: O(h) = O(log N)
- Space Complexity: O(1)

## Deletion in a Heap
- We can only delete the root node from a heap.