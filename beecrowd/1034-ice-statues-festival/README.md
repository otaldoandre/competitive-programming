# 1034 - Ice Statues Festival

## Problem
Given the target sculpture size and the available block sizes, find the minimum number of blocks needed to build the sculpture.

## Approach
Used a 1D dynamic programming array to store the minimum number of blocks needed to build each size from 0 to M.

## Key Concept
Bottom-up dynamic programming.  
Each position `dp[x]` stores the minimum number of blocks needed to build a sculpture of size `x`.

## Difficulties
Understanding how dynamic programming builds the solution inductively took time. At first, the recurrence relation logic and the intuition behind it were not clear.

## What I Learned
Learned how to use dynamic programming to build solutions from smaller subproblems and reuse previous results.

## Time Spent
230 min.

## Revisit
[x] I can solve this again without help