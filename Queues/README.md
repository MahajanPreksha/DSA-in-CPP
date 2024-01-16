# Introduction
- Queue is a data structure that supports **FIFO** (First In First Out) or **FCFS** (First Come First Serve).
- It is a linear data structure.
- Example: Queue of people standing outside ATM.

# Types of Operations on Queues
1. enqueue(): This operation will help us to add a new element in the queue.

2. dequeue(): This operation will help us to remove a new element in the queue.

3. isFull(): This operation will help us know if a queue is full or not.

4. isEmpty(): This operation will help us know if a queue is empty or not.

5. front(): This operation will give us the element which came first.

6. size(): This operation will give us the size of the queue.

> front: tracks the first element
> back/rear: element gets added from the end

# Types of Queues
1. Simple Queue: Element is added from the back and removed from front.

2. Priority Queue: Based on custom priority, element is at the front.

3. Circular Queue: Front and rear are connected.

4. Double Ended Queue/Deque: Addition and removal of elements can be done from both sides.

# Implementation of Queues
- By using Array
- By using Linked List

## Implementation of Queues using Array


## Implementation of Queues using Linked List
1. front = head.data
2. enqueue() = add at tail
3. dequeue() = remove from head