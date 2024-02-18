# Introduction
- Queue is a data structure that supports **FIFO** (First In First Out) or **FCFS** (First Come First Serve).
- It is a linear data structure.
- Example: Queue of people standing outside ATM.

## Types of Operations on Queues
1. enqueue(): This operation will help us to add a new element in the queue.
2. dequeue(): This operation will help us to remove a new element in the queue.
3. isFull(): This operation will help us know if a queue is full or not.
4. isEmpty(): This operation will help us know if a queue is empty or not.
5. front(): This operation will give us the element which came first.
6. size(): This operation will give us the size of the queue.

> front: tracks the first element; back/rear: element gets added from the end

## Types of Queues
1. Simple Queue: Element is added from the back and removed from front.
2. Priority Queue: Based on custom priority, element is at the front.
3. Circular Queue: Front and rear are connected.
4. Double Ended Queue/Deque: Addition and removal of elements can be done from both sides.

## Implementation of Queues
- By using Array
- By using Linked List

## Advantage of Array Implementation of Queues
- Array can manage data easily.

## Disadvantage of Array Implementation of Queues
- It is not space efficient.

# Deque
- In normal queues, back is responsible for addition of elements and front is responsible for accessing front element as well as removal of element.
- Deque stands for Double Ended Queue.
- We can add/remove elements from both front and back sides.
- It is used to implement stack (by default).

## Queues Questions
1. [Implement Queue using Linked List](https://www.geeksforgeeks.org/problems/implement-queue-using-linked-list/1?page=1&category=Queue&sortBy=submissions)

2. [Implement Queue using Array](https://www.geeksforgeeks.org/problems/implement-queue-using-array/1?page=1&category=Queue&sortBy=submissions)

3. [Queue Reversal](https://www.geeksforgeeks.org/problems/queue-reversal/1?page=1&category=Queue&sortBy=submissions)

4. [Sliding Window Maximum](https://leetcode.com/problems/sliding-window-maximum/description/)

5. [Implement Queue using Stacks](https://leetcode.com/problems/implement-queue-using-stacks/description/)