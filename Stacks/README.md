# Introduction
- Stack is a **LIFO** (Last In First Out) data structure.
- Lower portion of stack is locked and upper portion is called top.
- An element is added/pushed and removed/popped at/from the top of the stack only.
- **Use case of stack**: Recursion Call Stack

# Functions for Stack:
1. push(): insert element at top

```cpp
void push(x)
```

2. pop(): remove element from top

```cpp
void pop()
```

3. isEmpty(): check if stack is empty or not

```cpp
bool isEmpty()
```

4. isFull(): check if stack is full or not

```cpp
bool isFull()
```

5. size(): check size of stack

```cpp
int size()
```

6. top(): check topmost element
   
```cpp
int top()
```

## Two conditions in stacks:
1. **Overflow**: when capacity defined for stack exceeds by adding more elements
2. **Underflow**: when you access/remove element from stack which is empty

# Implementation of Stacks:
- By using Array
- By using Linked List
> Best implementation in O(1)

## Implementation of Stacks using Array
- Consider a property of top_idx.
- If top_idx==(-1), we are in the underflow/no elements are added yet. isEmpty() will return true.
- On pushing an element, top_idx++ and arr[top_idx] = element.
- On popping an element, top_idx--. arr[top_idx] = top element.
- isFull() will return true if top_idx==arr.size()-1. If we try to push an element, we will be in the overflow.
- size() = top_idx + 1

## Implementation of Stacks using Linked List
- Consider node of the linked list as element of the stack.
- Head of the linked list acts as the top of the stack.
- Consider a variable curr_size that stores the current size of the linked list.
- if(this->head==NULL), we are in the underflow/no elements are added yet. isEmpty() will return true.
- On pushing an element, new_node will point to the head of the linked list, new_node will be the head of the linked list and curr_size++;
- On popping an element, head variable will point to the second element of the linked list and value of removed node will be returned.
- isFull() will return true if this->curr_size==this->capacity. If we try to push an element, we will be in the overflow.
- size() = curr_size;

> By default, stack in implemented in C++ using deque.
> It can also be implemented by a list or vector.

# Stack Questions

1. [Implement Stack using Arrays](https://www.geeksforgeeks.org/problems/implement-stack-using-array/1?page=1&category=Stack&difficulty=School,Basic&sortBy=submissions)

2. [Implement Stack using Linked List](https://www.geeksforgeeks.org/problems/implement-stack-using-linked-list/1?page=1&category=Stack&sortBy=submissions)

3. [Clone a Stack Without Using Extra Space](https://www.geeksforgeeks.org/problems/clone-a-stack-without-usinig-extra-space/1)