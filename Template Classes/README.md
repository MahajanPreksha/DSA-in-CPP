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

### Other Member Functions of an Unordered Set
1. insert(): inserts elements in a set
- s.insert(value)
Time Complexity in case of single element: O(1) in average case and O(N) in worst case (when size>=capacity)
Time Complexity in case of multiple elements: O(n) in average case where n = number of elements being inserted and O(n*(N+1)) in worst case where n = number of elements being inserted and N = size of unordered set
2. erase(): deletes elements from a set
- s.erase(value)
- s.erase(iterator)
- s.erase(start_itr, end_itr)
Time Complexity in case of single element: O(1) in average case and O(N) in worst case (when size>=capacity)
Time Complexity in case of multiple elements: O(n) in average case where n = number of elements being deleted and O(n*(N+1)) in worst case where n = number of elements being deleted and N = size of unordered set
3. find(): returns value of element if present, else returns end iterator
- s.find(ele)
Time Complexity: O(1) in average case and O(N) in worst case
4. count(): returns number of occurrences of an element, returns 1 if value is present, else returns 0
- s.count(ele)
Time Complexity: O(1) in average case and O(N) in worst case
5. load_factor(): returns value of (size of unordered set/bucket count)
6. rehash(x): sets the number of buckets to x or more
Time Complexity: O(N) in average case and O(N*N) in worst case

## Multiset
- Multiset can store duplicate values.
- It stores values in ordered manner (ascending/descending).
- Value will be identified by itself.
- Value can't be modified in multiset.

### Declaration and Initialisation
```cpp
#include<set>
// multiset<data_type> set_name;
set<int> set1 = {1, 2, 3, 4};
// multiset<datatype, greater<datatype>> set_name; --> for decreasing order
```

### Other Member Functions of a Multiset
1. insert(): inserts elements in a set
- s.insert(value)
Time Complexity: O(log N)
2. erase(): deletes elements from a set
- s.erase(value) --> removes all duplicate values as well
- s.erase(iterator)
- s.erase(start_itr, end_itr)
Time Complexity: O(log N), O(log N) and O(N)
3. find(): returns lower bound of element searched if found, else returns end iterator
- s.find(ele)
Time Complexity: O(log N)
4. count(): returns number of occurrences of an element
- s.count(ele)
Time Complexity: O(k + log N)
5. lower_bound(): returns iterator pointing to first occurrence of value if present, else returns next greater value
- s.lower_bound()
Time Complexity: O(log N)
6. upper_bound(): returns the position of next greater value
- s.upper_bound()
Time Complexity: O(log N)

## Unordered Multiset
- Unordered Multiset can store duplicate values.
- It stores values in an unordered manner.
- Value will be identified by itself.
- Values can't be modified in unordered multiset.
- It is implemented using Hashing.

### Declaration and Initialisation
```cpp
#include<unordered_set>
// unordered_multiset<data_type> set_name;
unordered_multiset<int> set1 = {1, 2, 3, 4};
```

### Other Member Functions of an Unordered Multiset
1. insert(): inserts elements in a set
- s.insert(value)
Time Complexity in case of single element: O(1) in average case and O(N) in worst case (when size>=capacity)
Time Complexity in case of multiple elements: O(n) in average case where n = number of elements being inserted and O(n*(N+1)) in worst case where n = number of elements being inserted and N = size of unordered multiset
2. erase(): deletes elements from a set
- s.erase(value) --> removes all duplicate values as well
- s.erase(iterator)
- s.erase(start_itr, end_itr)
Time Complexity: O(1) in average case and O(N) in worst case (when size>=capacity)
3. find(): returns lower bound of element searched if found, else returns end iterator
- s.find(ele)
Time Complexity: O(1) in average case and O(N) in worst case (when size>=capacity)
4. count(): returns number of occurrences of an element
- s.count(ele)
Time Complexity: O(n) in average case where n = number of occurrences and O(N) in worst case where N = size of unordered multiset

## Set Questions

1. [Sum the Common Elements](https://www.geeksforgeeks.org/problems/sum-the-common-elements/1?page=1&category=STL,set&difficulty=School,Basic,Easy&status=unsolved&sortBy=difficulty)

2. [Pangram Strings](https://www.geeksforgeeks.org/problems/pangram-strings3155/1?page=1&category=Data%20Structures,Strings&difficulty=Easy) or [Check if the Sentence Is Pangram](https://leetcode.com/problems/check-if-the-sentence-is-pangram/)

3. [Find the smallest and second smallest element in an array](https://www.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1)

4. [Second Largest](https://www.geeksforgeeks.org/problems/second-largest3735/1)
---

# Map
- Map is an STL Container which stores key-value pairs.
- A map is used to make a solution efficient.
- The elements (i.e. key-value pairs) are stored in ascending or descending order.
- Maps can't have duplicate keys i.e. keys are unique.
- Maps in C++ are implemented through Binary Search Tree.

### Declaration and Initialisation
```cpp
#include<map> //header file required
//map<datatype_of_key, datatype_of_value> map_name = {{key1, value1}, {key2, value2}};
map<string, int> phone_dir = {{"Naman", 1234}, {"Aman", 2345}};
```
>> By default, order is ascending.

For descending order-
```cpp
//map<datatype_of_key, datatype_of_value, greater<datatype_of_key>> map_name;
```

### Insertion
```cpp
phone_dir.insert(make_pair("ABC", 4567));
//or
phone_dir["ABC"] = 4567;
```

### Printing Elements
- Using for each loop
```cpp
/*for(auto element:map_name){
    key = element.first;
    value = element.second
}*/
//Here element is a key-value pair.
```

### Other Member Functions in a Map
1. erase(): delete some elements from map
- m_name.erase(it) --> using iterator (used to traverse our STL Container)
- m.erase(key)
- m.erase(start_itr, end_itr) --> key-value pair at end_itr doesn't get deleted
Time Complexity: O(log N), O(log N), O(N)
2. swap(): swap two maps of same type
- m1.swap(m2)
- swap(m1, m2)
3. clear(): delete all elements from map
- m.clear()
4. empty(): returns 1 if empty, otherwise 0
- m.empty()
5. size(): returns number of key-value pairs
- m.size()
6. max_size(): Space allocated to map in memory
- m.max_size()
7. find(): returns iterator to the element if present, else returns m.end() iterator
- m.find(key)
Time Complexity: O(log N)
8. count(): returns number of occurrences of key
- m.count(key)
- It will return 1 if key is present as keys are unique.
9. upper_bound(): returns an iterator to the next greater element
- m.upper_bound()
10. lower_bound(): returns iterator to the element if present, else iterator to the next greater element
- m.lower_bount()
11. begin(): returns iterator to the first element
- m.begin()
12. end(): returns iterator to the position after the last element
- m.end()
13. rbegin(): returns iterator to the first element in reverse order
- m.rbegin()
14. rend(): returns iterator to the position after the last element in reverse order
- m.rend()

>> Maps are dynamic containers, like: lists, vectors, etc.

## Unordered Map
- It is an STL container that stores key-value pairs.
- Elements are not ordered in an unordered map.
- Keys will be unique.
- Insertion, Deletion and Retrieval/Search are done in O(1).
- Unordered map is implemented using Hashing.

### Declaration and Initialisation
```cpp
#include<unordered_map> //header file required
//unordered_map<datatype_of_key, datatype_of_value> map_name = {{key1, value1}, {key2, value2}};
```

### Printing Elements
- Using for each loop
```cpp
/*for(auto element:map_name){
    key = element.first;
    value = element.second
}*/
//Here element is a key-value pair.
```

### Other Member Functions in an Unordered Map
1. erase(): delete some elements from map
- m_name.erase(it)
- m.erase(key)
- m.erase(start_itr, end_itr)
Time Complexity in any case: O(1)
Time Complexity in worst case: O(n)
2. insert(): insert elements into the map
- m.insert(make_pair(key, value))
Time Complexity in any case: O(1)
Time Complexity in worst case: O(n)
3. find(): returns iterator to the element if present, else returns m.end() iterator
- m.find(key)
Time Complexity in any case: O(1)
Time Complexity in worst case: O(n)
4. count(): returns number of occurrences of key
- m.count(key)
- It will return 1 if key is present as keys are unique.
5. begin(): returns iterator to the first element
- m.begin()
6. end(): returns iterator to the position after the last element
- m.end()

## Multimap
- It is an STL container that stores key-value pairs.
- Elements are stored in an order - ascending or descending.
- Duplicate keys are allowed.
- Multimap is implemented using Binary Search Tree.
- Insertion, Deletion and Retrieval/Search are done in O(log N).

### Declaration and Initialisation
```cpp
#include<map> //header file required
//multimap<datatype_of_key, datatype_of_value> map_name = {{key1, value1}, {key2, value2}};
```
For descending order-
```cpp
//map<datatype_of_key, datatype_of_value, greater<datatype_of_key>> map_name;
```

### Insertion
```cpp
phone_dir.insert(make_pair("ABC", 4567));
```

### Printing Elements
- Using for each loop
```cpp
/*for(auto element:map_name){
    key = element.first;
    value = element.second
}*/
//Here element is a key-value pair.
```

### Other Member Functions in a  Multimap
1. erase(): delete some elements from map
- m_name.erase(it)
- m.erase(key)
- m.erase(start_itr, end_itr)
Time Complexity: O(log N), O(log N), O(N)
2. insert(): insert elements into the map
- m.insert(make_pair(key, value))
Time Complexity: O(log N)
3. find(): returns iterator to the element if present, else returns m.end() iterator
- m.find(key)
Time Complexity: O(log N)
4. count(): returns number of occurrences of key
- m.count(key)
5. begin(): returns iterator to the first element
- m.begin()
6. end(): returns iterator to the position after the last element
- m.end()
7. equal_range(): returns bounds of range of elements with keys passed
- m.equal_range()

## Unordered Multimap
- It is an STL container that stores key-value pairs.
- Elements are not stored in an ordered way.
- Duplicate keys are allowed.
- Multimap is implemented using Hashing.
- Insertion, Deletion and Retrieval/Search are done in O(1) in average case and O(N) in worst case.

### Declaration and Initialisation
```cpp
#include<unordered_map> //header file required
//unordered_multimap<datatype_of_key, datatype_of_value> map_name = {{key1, value1}, {key2, value2}};
```
For descending order-
```cpp
//unordered_multimap<datatype_of_key, datatype_of_value, greater<datatype_of_key>> map_name;
```

### Insertion
```cpp
phone_dir.insert(make_pair("ABC", 4567));
```

### Printing Elements
- Using for each loop
```cpp
/*for(auto element:map_name){
    key = element.first;
    value = element.second
}*/
//Here element is a key-value pair.
```

### Other Member Functions in an Unordered Multimap
1. erase(): delete some elements from map
- m_name.erase(it)
- m.erase(key)
- m.erase(start_itr, end_itr)
Time Complexity: O(1), O(1), O(N)
2. insert(): insert elements into the map
- m.insert(make_pair(key, value))
Time Complexity: O(1)
3. find(): returns iterator to the element if present, else returns m.end() iterator
- m.find(key)
Time Complexity: O(1)
4. count(): returns number of occurrences of key
- m.count(key)
Time Complexity: O(N) where N = Number of occurrences
5. begin(): returns iterator to the first element
- m.begin()
6. end(): returns iterator to the position after the last element
- m.end()

>> Summary:
>> Ordered + Unique Keys: Map
>> Not ordered + Unique Keys: Unordered Map
>> Not ordered + Duplicate Keys: Unordered Multimap
>> Ordered + Duplicate Keys: Multimap

## Map Questions
1. [Anagram](https://www.geeksforgeeks.org/problems/anagram-1587115620/1?page=3&sortBy=submissions) or [Valid Anagram](https://leetcode.com/problems/valid-anagram/)

2. [Isomorphic Strings](https://www.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1) or [Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/description/)

3. [Largest Subarray with 0 Sum](https://www.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1)