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
1. [Factorial](https://www.geeksforgeeks.org/problems/factorial5739/1)

2. [Nth Fibonacci Number](https://www.geeksforgeeks.org/problems/nth-fibonacci-number1335/1?page=3&sortBy=submissions) OR [509. Fibonacci Number](https://leetcode.com/problems/fibonacci-number)

3. [Sum Of Digits](https://www.geeksforgeeks.org/problems/sum-of-digits1742/1) OR [1281. Subtract the Product and Sum of Digits of an Integer](https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer)

4. [1837. Sum of Digits in Base K](https://leetcode.com/problems/sum-of-digits-in-base-k)

5. [Repeated sum of digits](https://www.geeksforgeeks.org/problems/repeated-sum-of-digits3955/0) OR [Repetitive Addition Of Digits](https://www.geeksforgeeks.org/problems/repetitive-addition-of-digits2221/0)  OR [258. Add Digits](https://leetcode.com/problems/add-digits)

6. [Print Elements of Array](https://www.geeksforgeeks.org/problems/print-elements-of-array4910/1)

7. [Largest Element in Array](https://www.geeksforgeeks.org/problems/largest-element-in-array4009/0) OR [Min and Max in Array](https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1)

8. [Sum of Array](https://www.geeksforgeeks.org/problems/sum-of-array2326/1)

9. [Palindrome](https://www.geeksforgeeks.org/problems/palindrome0746/1) OR [Palindrome String](https://www.geeksforgeeks.org/problems/palindrome-string0817/01) OR [9. Palindrome Number](https://leetcode.com/problems/palindrome-number)

10. [Print 1 To N Without Loop](https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops-1587115620/1?page=1&category=Recursion&difficulty=School&sortBy=submissions) OR [Print 1 to n without using loops](https://www.geeksforgeeks.org/problems/print-1-to-n-without-using-loops3621/1?page=1&category=Recursion&difficulty=School&sortBy=submissions)

11. [GCD of two numbers](https://www.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1) OR [GCD of Array](https://www.geeksforgeeks.org/problems/gcd-of-array0614/1) OR [1979. Find Greatest Common Divisor of Array](https://leetcode.com/problems/find-greatest-common-divisor-of-array)

12. [Armstrong Numbers](https://www.geeksforgeeks.org/problems/armstrong-numbers2727/1) OR [1134. Armstrong Number](https://leetcode.com/problems/armstrong-number)

13. [Frog Jump](https://www.geeksforgeeks.org/problems/geek-jump/0) OR [2498. Frog Jump II](https://leetcode.com/problems/frog-jump-ii)

14. [Array Search](https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/1)

15. [Subset Sums](https://www.geeksforgeeks.org/problems/subset-sums2234/0)

16. [Number of Unique Paths](https://www.geeksforgeeks.org/problems/number-of-unique-paths5339/0) OR [62. Unique Paths](https://leetcode.com/problems/unique-paths)

17. [Unique Paths in a Grid](https://www.geeksforgeeks.org/problems/unique-paths-in-a-grid--170647/1) OR [63. Unique Paths II](https://leetcode.com/problems/unique-paths-ii)

17. [Subsets](https://www.geeksforgeeks.org/problems/subsets-1613027340/0) OR [78. Subsets](https://leetcode.com/problems/subsets)

18. [Power Set](https://www.geeksforgeeks.org/problems/power-set4302/1)

19. [Possible Words From Phone Digits](https://www.geeksforgeeks.org/problems/possible-words-from-phone-digits-1587115620/1) OR [17. Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number)