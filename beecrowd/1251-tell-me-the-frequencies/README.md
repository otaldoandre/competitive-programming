# 1251 - Tell me the Frequencies!

## Problem
Given a line of text, output the value of the ASCII characters in the ascending order of their frequencies and their frequency.

## Approach
Used a map store the frequency and ASCII value of each character. Then, used a vector to sort, with a comparison lambda function, to sort the elements by their frequency in asc. order.

## Key Concept
Map (frequency counting) + Sorting with custom comparator

## Difficulties
Using the map was very confusing at first because I didn't know how it worked properly. Understanding that map is ordered by key, not by value was crucial. I needed to convert it to a vector to sort by frequency.

## What I Learned
Learned how to use map for frequency counting and how to sort with a custom lambda function. Also realized that counting frequencies directly with freq[w]++ is more efficient than using count().

## Time Spent
50 min.

## Revisit
[x] I can solve this again without help  
[ ] Optimize frequency counting (use freq[w]++)

