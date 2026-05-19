# 1286 - Motoboy

## Problem
Given a set of orders, their delivery times, the number of pizzas in each order, and the maximum number of pizzas allowed, find the maximum delivery time that respects the number of pizzas limit.

## Approach
Used a 2D DP array to store the best possible delivery time considering the orders processed so far and the current pizza capacity.

## Key Concept
2D dynamic programming.

## Difficulties
The hardest part was understanding how to model the DP state correctly.

I had difficulty identifying:
- what each DP dimension should represent
- what value should actually be stored in the DP table
- and how previous states combine to build the optimal solution

Understanding the relationship between item capacity constraints and the stored optimal values took some time.

## What I Learned
Learned that the most important part of dynamic programming is defining the DP state correctly:
- what each dimension represents (in this case, rows represented the orders considered so far, while columns represented the pizza capacity)
- what the DP table stores (the maximum delivery time)
- and how previous states transition into the current one (i.e, `max(dp[i-1][j], time[i] + dp[i-1][j-pizzas[i]])`)

By understanding how to build the DP matrix, you can build a solution to many 2D DP problem.

## Time Spent
165 min.

## Revisit
[x] I can solve this again without help