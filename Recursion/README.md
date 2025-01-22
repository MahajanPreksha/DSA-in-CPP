# Recursion
In recursion, we try to solve a bigger problem by finding out solutions to smaller sub-problems.

We represent these problems in the form of functions and these functions call themselves to solve a smaller problem.

> **Recursive Function**: It is a type of function that calls itself.

Recursion uses **Principle of Mathematical Induction (PMI)** for its application:
1. Base Case
2. Assumption
3. Self-work

> Recursive problems represented in Mathematical form are called Recurrence Relations.

Recursive Calls are stored in *Stack Frames* of the Call Stack.

> Note:
> - To calculate Time Complexity of a Recursive Function, the formula is: Number of times the function is called * Time consumed in one single function.
> - Space gets introduced due to Call Stack.
> - Sometimes, it is difficult to write an Interative solution over Recursive one. That's why recursion is preferred.

## Working of a Recursive Function
Syntax:
```cpp
    methodName(N parameters){ //Bigger Problem
        if(haltCondition){ //Base Case
            return result;
        }
        return methodName(N parameters); //Assumption + Self-work for Smaller Problems
    }
```

### Recursion on Arrays and Strings
Most of the times, to solve a problem of recursion related to arrays and strings, we definitely need to read them.

We will use an `idx` parameter to store the current index that we are pointing to in the array/string.

# Recursion Questions
1. [Print 1 To N Without Loop](https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1?page=1&category=Recursion&difficulty=School&sortBy=submissions) OR [Print 1 to n without using loops](https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops3621/1?page=1&category=Recursion&difficulty=School&sortBy=submissions)

2. [Factorial](https://www.geeksforgeeks.org/problems/factorial5739/1)

3. [Nth Fibonacci Number](https://www.geeksforgeeks.org/problems/nth-fibonacci-number1335/1?page=3&sortBy=submissions) OR [509. Fibonacci Number](https://leetcode.com/problems/fibonacci-number)

4. [Sum Of Digits](https://www.geeksforgeeks.org/problems/sum-of-digits1742/1) OR [1281. Subtract the Product and Sum of Digits of an Integer](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer)

5. [1837. Sum of Digits in Base K](https://leetcode.com/problems/sum-of-digits-in-base-k)

6. [Repeated sum of digits](https://www.geeksforgeeks.org/problems/repeated-sum-of-digits3955/0) OR [Repetitive Addition Of Digits](https://www.geeksforgeeks.org/problems/repetitive-addition-of-digits2221/0)  OR [258. Add Digits](https://leetcode.com/problems/add-digits)

7. [Print Elements of Array](https://www.geeksforgeeks.org/problems/print-elements-of-array4910/1)

8. [Largest Element in Array](https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0) OR [Min and Max in Array](https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1)

9. [Sum of Array](https://www.geeksforgeeks.org/problems/sum-of-array2326/1)