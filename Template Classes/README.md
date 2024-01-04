# Template Classes
- They allow us to pass data type as a parameter.
- Defined as:
```cpp
template<typename T>
```
- At compile time, template will expand.

# STL
- STL: Standard Template Library
- Set of template classes for implementing commonly used data structures and functions.
- Examples: vector, list, set, map, queue, stack, etc.

## Components of STL
1. Containers
2. Iterators
3. Algorithms

### Containers
- They are used to hold data of the same type.
- Examples:
    1. Vector: Class that defines a dynamic array.
    2. List: Class for doubly linked list.
    3. Map: Class used to store unique key-value pairs.
    4. Set: Class used to store unique values.

### Iterators
- These are used to iterate/traverse the containers.
- They are pointer-like entities.
- Example:
```cpp
vector<int> v = {1, 2, 3, 4, 5};
vector<int>::iterator itr;
itr.begin(); //will return 1.
```

### Algorithms
- These are functions that are used to manipulate data in the containers.
- Examples: sort(), min(), max();
---

## List
- It is a template class in STL for implementing a doubly linked list.

### Declaration and Initialisation
```cpp
#include<list>
// list<data_type> list_name
list<int> list1;
list<int> list2{1, 2, 3, 4};
list<int> list3 = {5, 6, 7, 8};
```

### Advantage of a List in C++ STL
- Implementation becomes easy.

### Iterator Functions
- list.begin(): iterator for the first element
- list.end(): iterator for the position after the last element
- list.rbegin(): iterator for the first element in reverse iteration
- list.rend(): iterator for the position after the last element in reverse position
- advance(itr, n): advances the itr by n places

### Inserting Elements into a List
- list.insert(itr, value): inserts value before the position of the itr
- list.insert(itr, count, value): insert value count number of times before itr
- list.insert(itr, start_itr, end_itr): insert values from start_itr to end_itr before itr

### Deleting Elements from a List
- list.erase(itr): deletes the element pointed to by the itr
- list.erase(start_itr, end_itr): deletes elements from start_itr to end_itr (end_itr is not included)

### Other Member Functions of a List Container
- push_front(val): inserts val in the front of the list
- pop_front(): removes value from from front of the list
- push_back(val): inserts val in the back of the list
- pop_back(): removes val from back of the list