## Prerequisites
**Data Structure**: It is a structure that stores data in an organised way.

Data Structures are of 2 types:
1. Linear: Data is stored in a linear fashion/sequential manner.

Examples: Array, Linked List, Stack, Queue

2. Non-linear/Hierarchical: Data is stored at different levels.

Examples: Tree, Graphs

# Tree
Tree Data Structure is a non-linear data structure that stores hierarchical data.

Elements are stored at different levels.

Elements are called nodes which are connected/linked together to represent hierarchy.

Real Life Example: Family Tree

Every node contains:
1. Data
2. Links to other successor/descendent nodes

## Terminologies
1. **Root Node**: Top-most node from tree starts expanding is called root node.
- A tree is represented by its root node.

2. **Child Node**: If a node is successor/descendent of another node, then it is called a child node.
- Root Node is not a child node.

3. **Parent Node**: If a node is predecessor of any node, then it is called a parent node.
- Root Node has no parent node.

4. **Sibling Nodes**: These are the nodes that have common parent node.

5. **Leaf Node**: A leaf node has no child nodes.

6. **Edge**: It is the link between 2 nodes.
- Edges are unidirectional in a tree.

7. **Level**: It is the number of edges from root node.
- Root node is at level = 0.

8. **Height**: It is the maximum number of edges between a leaf node and root node.

9. **Size**: It is the number of nodes in a tree.

> If there are N nodes in a tree, then number of edges = N - 1.

10. **Subtree**: It is a tree which is a child of a node.

11. **Depth**: It is the number of nodes along the longest path from the root node down to the farthest leaf node.

## Types of Trees:
1. **Generic Tree**: It is a tree that can have any number of child nodes.
2. **Binary Tree**: It is a tree in which a node can have maximum 2 child nodes (0, 1, 2).
3. **Binary Search Tree(BST)**: It is a binary tree in which all nodes in left subtree will have values less than root node value **and** all nodes in right subtree will have values more than root node values.
4. **AVL Tree**: It is a self-balancing tree i.e. difference between heights of nodes of left subtree and right subtree can be 1, 0 or -1.

# Binary Tree
It is a tree in which a node can have maximum 2 child nodes (0, 1, 2).

Every node contains:
1. Data
2. Link to left child node
3. Link to right child node

> Leaf nodes or if any child nodes doesn't exist, then pointer will point to NULL.

## Implementation of Node Class
| LEFT | DATA | RIGHT |
| :--- | :--- | :--- |

> Left Child and Right Child will store the address of left and right child nodes respectively.

## Traversals in Binary Tree
1. Depth First Search (DFS): We travel along the height.
- First we cover left subtree and then right subtree.
- Three types of DFS:

a. Pre-order Traversal: It is a recursive process.

Steps: - Visit the root node - Left Subtree - Right Subtree

b. In-order Traversal: It is a recursive process.

Steps: - Visit the left subtree - Root Node - Right Subtree

c. Post-Order Traversal: It is a recursive process.

Steps: - Visit the left subtree - Right Subtree - Root Node

2. Breadth First Search (BFS): We travel along the levels.
- Type of BFS:

Level-order Traversal: First, 0 level, then 1 and so on.

It uses queue that follows FIFO.

## Binary Trees Questions:
1. [Size of Binary Tree](https://www.geeksforgeeks.org/problems/size-of-binary-tree/1?page=1&category=Tree&difficulty=School,Basic,Easy,Medium&sortBy=difficulty) OR [Count Complete Tree Nodes](https://leetcode.com/problems/count-complete-tree-nodes)

2. [Root Equals Sum of Children](https://leetcode.com/problems/root-equals-sum-of-children)

3. [Preorder Traversal](https://www.geeksforgeeks.org/problems/preorder-traversal/1?page=1&category=Tree&difficulty=School,Basic&sortBy=difficulty) OR [Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal)

4. [Inorder Traversal](https://www.geeksforgeeks.org/problems/inorder-traversal/1?page=1&category=Tree&difficulty=School,Basic&sortBy=difficulty) OR [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal)

5. [Postorder Traversal](https://www.geeksforgeeks.org/problems/postorder-traversal/1?page=1&category=Tree&difficulty=School,Basic&sortBy=difficulty) OR [Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal)

6. [Level order traversal](https://www.geeksforgeeks.org/problems/level-order-traversal/1?page=2&category=Tree&difficulty=School,Basic,Easy,Medium,Hard&sortBy=difficulty) OR [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal)

7. [Maximum Depth Of Binary Tree](https://www.geeksforgeeks.org/problems/maximum-depth-of-binary-tree/1?page=4&category=Tree&difficulty=School,Basic,Easy&sortBy=difficulty) OR [Maximum Depth of Binary Tree](https://leetcode.com/problems/maximum-depth-of-binary-tree)

8. [Count Leaves in Binary Tree](https://www.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1?page=1&category=Tree&difficulty=School,Basic,Easy&sortBy=difficulty)

9. [Count Non-Leaf Nodes in Tree](https://www.geeksforgeeks.org/problems/count-non-leaf-nodes-in-tree/1?page=1&category=Tree&difficulty=School,Basic,Easy&sortBy=difficulty)

10. [Leaf-Similar Trees](https://leetcode.com/problems/leaf-similar-trees)

11. [Sum of Left Leaf Nodes](https://www.geeksforgeeks.org/problems/sum-of-left-leaf-nodes/1?page=3&category=Tree&difficulty=School,Basic,Easy&sortBy=difficulty) OR [Sum of Left Leaves](https://leetcode.com/problems/sum-of-left-leaves)

12. [Sum of Right Leaf Nodes](https://www.geeksforgeeks.org/problems/sum-of-right-leaf-nodes/1?page=3&category=Tree&difficulty=School,Basic,Easy&sortBy=difficulty)

13. [Height of Binary Tree](https://www.geeksforgeeks.org/problems/height-of-binary-tree/1?page=1&category=Tree&difficulty=School,Basic,Easy&sortBy=difficulty)

14. [Right View of Binary Tree](https://www.geeksforgeeks.org/problems/right-view-of-binary-tree/1?page=1&category=Tree&difficulty=School,Basic,Easy&sortBy=difficulty) OR [Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view)

15. [Top View of Binary Tree](https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1?page=6&category=Tree&difficulty=School,Basic,Easy,Medium&sortBy=difficulty)

16. [Left View of Binary Tree](https://www.geeksforgeeks.org/problems/left-view-of-binary-tree/1?page=2&category=Tree&difficulty=School,Basic,Easy&sortBy=difficulty)

17. [Bottom View of Binary Tree](https://www.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1?page=5&category=Tree&difficulty=School,Basic,Easy,Medium&sortBy=difficulty)

18. [Reverse Level Order Traversal](https://www.geeksforgeeks.org/problems/reverse-level-order-traversal/1?page=2&category=Tree&difficulty=School,Basic,Easy,Medium&sortBy=difficulty) OR [Binary Tree Level Order Traversal II](https://leetcode.com/problems/binary-tree-level-order-traversal-ii)

19. [Diameter of Binary Tree](https://www.geeksforgeeks.org/problems/diameter-of-binary-tree/1?page=5&category=Tree&difficulty=School,Basic,Easy,Medium&sortBy=difficulty) OR [Diameter of Binary Tree](https://leetcode.com/problems/diameter-of-binary-tree)

20. [Check for Children Sum Property in a Binary Tree](https://www.geeksforgeeks.org/problems/children-sum-parent/1?page=2&category=Tree&sortBy=submissions)

21. [Mirror Tree](https://www.geeksforgeeks.org/problems/mirror-tree/1?page=1&category=Tree&sortBy=submissions) OR [Invert Binary Tree](https://leetcode.com/problems/invert-binary-tree)

22. [Check for Balanced Tree](https://www.geeksforgeeks.org/problems/check-for-balanced-tree/1?page=1&category=Tree&sortBy=submissions) OR [Balanced Binary Tree](https://leetcode.com/problems/balanced-binary-tree)

23. [ZigZag Tree Traversal](https://www.geeksforgeeks.org/problems/zigzag-tree-traversal/1?page=1&category=Tree&sortBy=submissions) OR [Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal)

24. [Check if subtree](https://www.geeksforgeeks.org/problems/check-if-subtree/1?page=2&category=Tree&sortBy=submissions) OR [Subtree of Another Tree](https://leetcode.com/problems/subtree-of-another-tree)

25. [Maximum Width of Binary Tree](https://www.geeksforgeeks.org/problems/maximum-width-of-tree/1?page=3&category=Tree&sortBy=submissions) OR [Maximum Width of Binary Tree](https://leetcode.com/problems/maximum-width-of-binary-tree)

26. [Path Sum III](https://leetcode.com/problems/path-sum-iii)

27. [Maximum path sum from any node](https://www.geeksforgeeks.org/problems/maximum-path-sum-from-any-node/1) OR [124. Binary Tree Maximum Path Sum](https://leetcode.com/problems/binary-tree-maximum-path-sum)

28. [Construct Tree from Inorder & Preorder](https://www.geeksforgeeks.org/problems/construct-tree-1/1) OR [105. Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal)

29. [889. Construct Binary Tree from Preorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal)

30. [Flatten binary tree to linked list](https://www.geeksforgeeks.org/problems/flatten-binary-tree-to-linked-list/1) OR [114. Flatten Binary Tree to Linked List](https://leetcode.com/problems/flatten-binary-tree-to-linked-list)

31. [2385. Amount of Time for Binary Tree to Be Infected](https://leetcode.com/problems/amount-of-time-for-binary-tree-to-be-infected)