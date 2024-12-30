# Dynamic Programming (DP)
It is an optimisation technique over brute force that works on the principle of **reusability**.

**Sole Purpose of DP**: If you already know about something, do not recompute it. Instead, reuse it.

## Overlapping Subproblems
A problem is said to have Overlapping Subproblems if the problem can be broken down into subproblems which are reused several times or a recursive algorithm for the problem solves the same subproblem over and over rather than always generating new subproblems.

Such problems are also called repeating subproblems.

## Optimal Substructure
A problem is said to have Optimal Substructure if the optimal solution of the given problem can be obtained by using the optimal solution to its subproblems instead of trying every possible way to solve the subproblems.

# Differences between Greedy and DP
| Greedy | DP |
| --------- | --------- |
| A Greedy algorithm builds a solution piece by piece, always choosing the next piece that offers the most obvious and immediate benefit. | A DP algorithm builds up the solution to a problem by solving its subproblems recursively. |
| It is useful for solving problems where making locally optimal choices at each step leads to a global optimum. | It is used where the optimal solution can be obtained by combining optimal solutions to subproblems. |
| It doesn't necessarily consider the future consequences of the current choice. | DP stores the solutions to subproblems and reuses them when necessary to avoid solving the same subproblems multiple times. |
| The greedy approach is generally faster and simpler, but may not always provide the optimal solution. | DP guarantees the optimal solution but is slower and more complex. |

# Applications of DP
DP is used in case of finding solutions of:
1. Overlapping Subproblems
2. Optimal Substructure

# Approaches of DP
1. Top Down Approach/Memoization
2. Bottom Up Approach/Tabulation

# Steps to use DP
1. Identify the state of the DP: Identify and define the subproblem of the DP.
2. How the subproblems are related i.e. identify the formula between them
3. Storing the results once computed

## DP Questions
1. [509. Fibonacci Number](https://leetcode.com/problems/fibonacci-number)

2. [Stickler Thief](https://www.geeksforgeeks.org/problems/stickler-theif-1587115621/1) OR [198. House Robber](https://leetcode.com/problems/house-robber)