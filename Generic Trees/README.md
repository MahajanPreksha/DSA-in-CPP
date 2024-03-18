# Introduction
- Generic Trees are those type of trees where every node has data and list of references to its children nodes.
- These are also called N-ary trees.

## Implementation of Generic Trees
```cpp
class Node{
    int data; //can be string, bool, float
    vector<Node*> children; //this vector will contain references to all child nodes.
};
```
> If any node's children.size()==0, it means that node is a leaf node.
> If any node's children.size()==N, it means that node has N children.

## Traversals in Generic Trees
1. Depth First Search (DFS)
2. Breadth First Search (BFS)

1. DFS
a. Preorder Traversal:
- Print root node
- Recursively call for child nodes (Left -> Right)

b. Inorder Traversal:
- Recursively visit child nodes except the Last child node
- Print root node
- Recursively visit last child node

c. Postorder Traversal:
- Recursively call for child nodes
- Print root node

> Time Complexity: O(N)

2. BFS
a. Level order Traversal
- Use queue data structure that follows FIFO