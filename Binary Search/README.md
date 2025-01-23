# Binary Search
Depending upon different cases and user demands, there are different kind of searching problems.

Examples:
1. Searching a product on any e-commerce website.
2. Searching a number in contacts.

> **Searching** is trying to find particular type of data in a pool of data. (*Constraints* may vary.)

## Linear Search Algorithm
Find a target element in the given data.

Array = [1, 6, 9, 3, -1, 8, 2] and Target Element = 8

**Brute Force Solution**: Go to every element and match with the target element and ith index is the answer if it matches with the target element.

Size of Search Space (That bounded range/dataset where you apply searching): N --> (N-1) --> (N-2) --> ... --> 3 --> 2 --> 1 (**Linear Reduction of N**)

> Worst Case occurs when target element is not present.

**Time Complexity**: O(N)

## Binary Search Algorithm
Steps to perform Binary Search:
1. Divide search space into 2 equal parts: left and right.
2. Left search space should be different from right search space on the basis of some property.

Example: Sorted Array = [1, 9, 13, 15, 18, 22, 35, 40] and target element = 35

1. Entire array is the search space.
2. Divide the array into two equal halves.

**Solution**: 
1. low = 1; mid = 15; high = 40;
2. mid < 35 --> low = mid + 1 --> low and mid < 35; low = mid + 1;
3. low = mid --> ans = 6

**Time Complexity**: O(log N)
**Space Complexity**: O(1)

### Flaw of Iterative and Recursive Approaches:
We are calculating mid in both approaches.

In case, if low and high become INT_MAX, upon addition the value becomes very high such that **integer overflow** may occur.

Solution-
```
    mid = (low + high + low - low)/2
        = ((low + low) + (high - low))/2
        = low + (high - low)/2
```

## Binary Search Questions
1. [Binary Search](https://www.geeksforgeeks.org/problems/binary-search-1587115620/1) OR [Sorted Array Search](https://www.geeksforgeeks.org/problems/who-will-win-1587115621/1) OR [704. Binary Search](https://leetcode.com/problems/binary-search)

2. [First and last occurrences of x](https://www.geeksforgeeks.org/problems/first-and-last-occurrences-of-x2041/1) OR [First and Last Occurrences](https://www.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1) OR [34. Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array)

3. [Square Root](https://www.geeksforgeeks.org/problems/square-root/1) OR [69. Sqrt(x)](https://leetcode.com/problems/sqrtx)