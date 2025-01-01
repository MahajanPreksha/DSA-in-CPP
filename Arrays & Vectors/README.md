# Arrays
An array is a data structure that stores a collection of homogeneous items i.e. items of the same data type (int, char, bool, etc.).

## Representation of Array
Array can be represented as a block of memory which are further divided into more sub-blocks.

Length of array = Number of sub-blocks

To access an item of an array, index is used to tell about the location of every element in array.

> Arrays are 0-indexed i.e. indexing starts from 0.

## Syntax for Array Declaration
Syntax:
```cpp
data_type array_name[array_size];
```

Example:
```cpp
int array[5];
```

Declaring and initialising an array:
```cpp
int array[] = {1, 2, 3, 4, 5};
```
## Memory Allocation in Arrays
Arrays have contiguous memory allocation i.e. elements are stores in consecutive blocks of memory.

Let address of 1st element = x

Address of 2nd element = x + sizeofelement

## Types of Arrays
There are generally two types of arrays:
1. Single dimensional or 1-D Array
2. Multidimensional Array

Accessing elements in Single dimensional array:
- 0-based indexing
- Index of Last Element = sizeofarray - 1

#### Size Operation in Arrays
Using ```sizeof``` operator, we can find the total memory allocated to the array.

To find the total number of items in an array:
```cpp
    int size = sizeof(array)/sizeof(array[0]);
```

> Note: If array is not initialised, it will contain garbage values.

# Vectors
Vectors are dynamic arrays i.e. they can be resized when you want to insert/delete elements.

Vectors have contiguous memory allocation.

## Basic Operations in Vectors
- Declaring a vector:
```cpp
#include<vector> //Header file

vector<data_type> vector_name;
//OR
vector<data_type> vector_name(size);
```

Example:
```cpp
vector<int> v;
```

- Size of vector:
```cpp
    v.size(); //--> .size()
```

- Resize vector:
```cpp
    v.resize(new_size); //--> .resize(new_size)
```

- Checking the capacity of vector:
```cpp
    v.capacity(); //--> .capacity()
```

> *Note*: Capacity of vector >= size of vector

> Capacity changes dynamically. It usually increases in the power of 2 (compiler-dependent).

- Add elements in vector:
```cpp
    v.push_back(element); //Adds element at the end
    v.insert(position, element); //Adds element at a specific position --> relative to position of first element
```

- Checking the position of first element:
```cpp
    v.begin();
```

- Checking the position of last element:
```cpp
    v.end();
```

- Deleting elements of vector:
```cpp
    v.pop_back(); //Deletes last element
    v.erase(position); //Deletes element relative to first element
    v.clear(); //Deletes all elements
```

## Array and Vector Questions
1. [Sum of Array](https://www.geeksforgeeks.org/problems/sum-of-array2326/1)

2. [Largest Element in Array](https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0)

3. [Array Search](https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1)

4. [First and last occurrences of x](https://www.geeksforgeeks.org/problems/first-and-last-occurrences-of-x2041/1)

5. [Number of occurrence](https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1)

6. [2148. Count Elements With Strictly Smaller and Greater Elements](https://leetcode.com/problems/count-elements-with-strictly-smaller-and-greater-elements)

7. [Check if array is sorted](https://www.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1)

8. [Even Odd Sum](https://www.geeksforgeeks.org/problems/even-odd-sum5450/0)

9. [Count pairs with given sum](https://www.geeksforgeeks.org/problems/count-pairs-with-given-sum--150253/1) OR [1. Two Sum](https://leetcode.com/problems/two-sum/)

10. [2824. Count Pairs Whose Sum is Less than Target](https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/)

11. [Triplet Sum in Array](https://www.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1) OR[15. 3Sum](https://leetcode.com/problems/3sum/)

12. [Single Among Doubles](https://www.geeksforgeeks.org/problems/element-appearing-once2552/1)

13. [Second Largest](https://www.geeksforgeeks.org/problems/second-largest3735/1)

14. [1464. Maximum Product of Two Elements in an Array](https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array)

15. [Rotate Array by One](https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1) OR [189. Rotate Array](https://leetcode.com/problems/rotate-array)

16. [Rotating an Array](https://www.geeksforgeeks.org/problems/reversal-algorithm5340/1?page=1&sortBy=difficulty)