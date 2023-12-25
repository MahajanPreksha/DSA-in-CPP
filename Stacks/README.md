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

## Implementation of Stacks:
- By using Array
- By using Linked List
> Best implementation in O(1)

# Implementation of Stacks using Array
- Consider a property of top_idx.
- If top_idx==(-1), we are in the underflow/no elements are added yet. isEmpty() will return true.
- On pushing an element, top_idx++ and arr[top_idx] = element.
- On popping an element, top_idx--. arr[top_idx] = top element.
- isFull() will return true if top_idx==arr.size()-1. If we try to push an element, we will be in the overflow.
- size() = top_idx + 1
