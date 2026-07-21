# Longest Valid Parentheses

## Problem

Given a string containing only `'('` and `')'`, find the length of the longest valid parentheses substring.

---

# Approach 1 - Brute Force

### Idea

In this approach, I check every possible substring.

For each substring, I check whether it is a valid parentheses string or not.

If the substring is valid, I compare its length with the current maximum answer.

This is the easiest approach to understand, but it takes more time because every substring is checked separately.

### Time Complexity

O(n³)

### Space Complexity

O(1)

---

# Approach 2 - Optimized

### Idea

In this approach, I do not create every substring.

I start from each index and move towards the right.

While moving, I count the number of opening and closing brackets.

* If both counts become equal, I update the answer.
* If closing brackets become greater than opening brackets, I stop checking from that starting index.

This removes some extra work and is faster than the brute force solution.

### Time Complexity

O(n²)

### Space Complexity

O(1)

---

# Approach 3 - Best Solution (Stack)

### Idea

This is the most efficient solution.

I use a stack to store the indices of opening brackets.

* Push the index when the character is `'('`.
* Pop when the character is `')'`.
* If the stack becomes empty, push the current index.
* Otherwise, calculate the current valid substring length using the current index and the top of the stack.

The maximum length found during the traversal is the final answer.

### Time Complexity

O(n)

### Space Complexity

O(n)

---

# Conclusion

I started with the brute force solution because it is easy to understand.

Then I improved it by removing unnecessary work, which reduced the time complexity.

Finally, I used the stack approach, which solves the problem in O(n) time and works efficiently for large inputs.
