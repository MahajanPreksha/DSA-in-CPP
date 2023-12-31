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

# List
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
---

# Set
- Set is an STL container used to store unique values.
- It stores values in ordered state (either in increasing order or decreasing order).
- There is no indexing, elements are identified by their own values.
- Once value is inserted in a set, it cannot be modified. Value becomes constant.
- It is implemented internally using a Red Black Tree.

### Advantages of Set
- When we need to store unique values
- When we need to store data in ordered manner
- Has dynamic size, so there is no overflowing errors
- Faster data structure; insertion, deletion and search are in O(log n)

### Disadvantages of Set
- Cannot access elements using indexing
- Requires more memory than array
- Not suitable for large datasets as insertion and deletion can be costly

### Declaration and Initialisation
```cpp
#include<set>
// set<data_type> set_name;
set<int> set1 = {1, 2, 3, 4};
// set<datatype, greater<datatype>> set_name; --> for decreasing order
```
By default, values are stored in increasing order.

### Inserting Elements into a Set
- set_name.insert(value);
- Time Complexity: O(log n)
- Returns an iterator to the inserted value

### Traversal of a Set
- using iterator
- set_name.begin(): iterator pointing to the first element of set
- set_name.end(): iterator pointing to the position after the last element of set

### Deleting Elements from a Set
- set_name.erase(value): deletes value from set
- set_name.erase(position): deletes value from set pointed to position
- set_name.erase(start_pos, end_pos): deletes elements from start_pos including it till end_pod excluding end_pos
- Time Complexity: O(log n) but for the last one, it will be O(n) as number of elements is in the range

### Other Member Functions of a Set Container
- size(): get size of set
- max_size(): get maximum number of elements set can hold
- empty(): returns true if set is empty, else false
- clear(): removes all elements from set
- find(): returns position of element if present, else returns end iterator
- count(): returns number of occurrences of an element, returns 1 if value is present, else returns 0
- lower_bound(): returns element if present, else returns greater value
- upper_bound(): returns the next greater value
- begin(): returns iterator to the first element of the set
- end(): returns iterator pointing to the position after the last element of set
- rbegin(): returns iterator to the first element in reverse order
- rend(): returns iterator to the position after the last element in reverse order

## Unordered Set
- Values are stored in unordered fashion.
- It stores unique values which will be identified by itself.
- Values cannot be modified inside set.
- On average, time complexity for insertion, deletion and search is O(1) using Hashing.

### Declaration and Initialisation
```cpp
#include<unordered_set>
// unordered_set<data_type> set_name;
unordered_set<int> set1 = {1, 2, 3, 4};
```

## Set Questions

1. [Sum the Common Elements](https://www.geeksforgeeks.org/problems/sum-the-common-elements/1?page=1&category=STL,set&difficulty=School,Basic,Easy&status=unsolved&sortBy=difficulty)

2. [Pangram Strings](https://www.geeksforgeeks.org/problems/pangram-strings3155/1?page=1&category=Data%20Structures,Strings&difficulty=Easy) or [Check if the Sentence Is Pangram](https://leetcode.com/problems/check-if-the-sentence-is-pangram/)