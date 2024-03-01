# Introduction
- Sorting is the ordering of elements in ascending or descending order.

## Bubble Sort Algorithm:
- Repeatedly swap two adjacent elements if they are in wrong order until the array is sorted.
- Number of passes = Number of elements that have reached correct position
- Example: 20, 50, 40, 10, 30
- Steps:
(1) 20, 40, 50, 10, 30
(2) 20, 40, 10, 50, 30
(3) 20, 40, 10, 30, 50 //1st pass
(4) 20, 10, 40, 30, 50
(5) 20, 10, 30, 40, 50 //2nd pass
(6) 10, 20, 30, 40, 50 //3rd pass
(7) 10, 20, 30, 40, 50 //4th pass
- If there are n elements and n-1 elements are at their correct positions, then all n elements are at their correct positions, which means we will require n-1 passes.
- Correct position refers to position of element in sorted array
- Maximum number of swaps in worst case in Bubble Sort: n(n-1)/2
Time Complexity: O(n^2)
Space Complexity: O(1)

## Stable and Unstable Sort
- Stable Sort: does not disturb the order of elements with same value.
Example: 40, 30, 10, 20, 30*
After sorting, 10, 20, 30, 30*, 40
- Unstable Sort: may or may not change the order of elements with same value
After sorting, 10, 20, 30*, 30, 40 OR 10, 20, 30, 30*, 40

>> Bubble Sort is a Stable Sorting Algorithm

Selection Sort Algorithm: Repeatedly find minimum element in unsorted array and place it at beginning of array until array is sorted
Example: 3, 1, 5, 4, 2
(1) 1, 3, 5, 4, 2
(2) 1, 2, 5, 4, 3
(3) 1, 2, 3, 4, 5
If there are n elements and n-1 elements are at their correct positions, then all n elements are at their correct positions, which means we will require n-1 passes.
Time Complexity: O(n^2) for both worst and best cases
Space Complexity: O(1)
Selection Sort is an Unstable Sorting Algorithm
Max Swaps in Selection Sort: O(n)
Applications of Selection Sort:
(1) Element reaches the correct position at first swap
(2) When we need fewer swaps 