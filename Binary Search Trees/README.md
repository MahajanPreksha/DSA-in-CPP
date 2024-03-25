# Introduction
- Binary Search Tree (BST) is a type of Binary Tree (with maximum 2 child nodes) where all values in left subtree of node are less than the value of node and all values in right subtree of node are more than the value of node.
- This property is true for root node of all subtrees in a BST.

## Advantages of BST
- Insertion, deletion and search in a BST occur in O(log n) in average case.
- Elements are in sorted order, so it is easier to find minimum and maximum elements.

## Disadvantage of BST
- Insertion, deletion and search in a BST occurs in O(n) in worst case. Worst case comes in case of **Unbalanced Tree** (A tree in which elements are skewed in one direction).

## Applications of BST
- Data structures like: Sets and Maps (Ordered) are implemented using BST. That's why insertion, deletion and search in sets and maps occur in O(log n) in average case and O(n) in worst case.
- Data structures like: priority queue is also implemented using BST.

## Traversals in BST
1. Depth First Search (DFS):
(a) Preorder Traversal:
- Print the value of root
- Traverse the left child
- Traverse the right child

(b) Inorder Traversal:
- Traverse the left child
- Print the value of root
- Traverse the right child

(c) Postorder Traversal:
- Traverse the left child
- Traverse the right child
- Print the value of root

2. Breadth First Search (BFS):
(a) Level order Traversal

## Deletion of node in BST
1. Node with 0 Child (Leaf Node)
2. Node with 1 Child
3. Node with 2 Children

## BST Questions:
1. [Insert a node in a BST](https://www.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1?page=1&category=Binary%20Search%20Tree&sortBy=submissions) or [Insert into a Binary Search Tree](https://leetcode.com/problems/insert-into-a-binary-search-tree/description/)

2. [Search a node in BST](https://www.geeksforgeeks.org/problems/search-a-node-in-bst/1?page=1&category=Binary%20Search%20Tree&sortBy=submissions) or [Search in a Binary Search Tree](https://leetcode.com/problems/search-in-a-binary-search-tree/description/)

3. [Minimum element in BST](https://www.geeksforgeeks.org/problems/minimum-element-in-bst/1?page=1&category=Binary%20Search%20Tree&sortBy=difficulty)

4. [Delete a node from BST](https://www.geeksforgeeks.org/problems/delete-a-node-from-bst/1?page=1&category=Binary%20Search%20Tree&sortBy=submissions) or [Delete Node in a BST](https://leetcode.com/problems/delete-node-in-a-bst/description/)

5. [Array to BST](https://www.geeksforgeeks.org/problems/array-to-bst4443/1?page=2&category=Binary%20Search%20Tree&sortBy=submissions) or [Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/)

6. [Lowest Common Ancestor in a BST](https://www.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1?page=1&category=Binary%20Search%20Tree&sortBy=submissions) or [Lowest Common Ancestor of a Binary Search Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/)

7. [Predecessor and Successor](https://www.geeksforgeeks.org/problems/predecessor-and-successor/1?page=1&category=Binary%20Search%20Tree&sortBy=submissions) or [Inorder Successor in BST](https://leetcode.com/problems/inorder-successor-in-bst)

8. [Check for BST](https://www.geeksforgeeks.org/problems/check-for-bst/1?page=1&category=Binary%20Search%20Tree&sortBy=submissions)