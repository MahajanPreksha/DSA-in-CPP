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

## Linked List Questions:
1. Print Linked List Elements:
https://www.geeksforgeeks.org/problems/print-linked-list-elements/1?page=1&category=Linked%20List&difficulty=School,Basic,Easy&sortBy=submissions
2. Linked List Insertion:
https://www.geeksforgeeks.org/problems/linked-list-insertion-1587115620/1?page=1&category=Linked%20List&difficulty=School,Basic,Easy&sortBy=submissions
3. Delete Alternate Nodes:
https://www.geeksforgeeks.org/problems/delete-alternate-nodes/1?page=2&category=Linked%20List&difficulty=School,Basic,Easy&sortBy=submissions
4.	Reverse a Linked List:
https://www.geeksforgeeks.org/problems/reverse-a-linked-list/1?page=1&category=Linked%20List&difficulty=School,Basic,Easy&sortBy=submissions
or
https://leetcode.com/problems/reverse-linked-list/
5. Count Nodes in Linked List:
https://www.geeksforgeeks.org/problems/count-nodes-of-linked-list/1?page=1&category=Linked%20List&difficulty=School,Basic,Easy,Medium,Hard&sortBy=submissions 
6. Reverse Nodes in k-Group
https://www.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1?page=1&category=Linked%20List&difficulty=School,Basic,Easy,Medium,Hard&sortBy=submissions
or
https://leetcode.com/problems/reverse-nodes-in-k-group/
7. Check if Two Linked Lists are Equal or Not
8. Intersection of Two Linked Lists
https://leetcode.com/problems/intersection-of-two-linked-lists/
9.
