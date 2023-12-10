***Linked List: It is a linear data structure used to store a list of values.***
***These are memory blocks linked to each other.***

Array: It is a single memory block with partitions.

# Array vs Linked List

## Array

- It is a single memory block with partitions.

### Challenges of Array

1. **Static size:** We cannot increase/decrease the size of the array.
2. **Contiguous memory allocation:** There should be a single block of memory which is contiguous.
3. **Insertion and deletion are costly.** (O(n))

## Linked List

- Blocks of memory are called nodes.
- A node is divided into two parts: Data and Next Pointer.
- Head pointer points to the first node and gives the entire linked list.
- Last node's next field stores NULL, also called the Tail Node.

### Advantages of Linked List

1. **Dynamic size:** We can easily increase/decrease elements.
2. **Non-contiguous memory allocation.**
3. **Insertion and deletion are inexpensive.** (Only linking needs to be changed.)

### Types of Linked Lists

- (a) **Singly linked list:** Every node points to its successor node.
- (b) **Doubly linked list:** Every node is connected to its previous and next node.
- (c) **Circular linked list:** The last node will point to the head node.



# Implementation of a Singly Linked List

## Listnode

Listnode is not a built-in datatype. The syntax for a listnode in a singly linked list is as follows:

```cpp
class Node {
    int val;   // string, bool, object
    Node* next;
};
```
Traversal of linked list: Head can help to access the entire linked list.

# Singly Linked List Operations

## Insertion at kth position

1. **At the start of the head:** Time Complexity - O(1)
2. **At the end of the list:** Time Complexity - O(n) [If tail pointer is passed, then O(1)]
3. **At an arbitrary position:** O(k) or O(n) in worst case

## Updation at kth position

Time Complexity is O(k) but O(n) in the worst case.

## Deletion at kth position

1. **At the start:** Time Complexity - O(1)
2. **At the end:** Time Complexity - O(n)
3. **At an arbitrary position:** Time Complexity - O(n)
