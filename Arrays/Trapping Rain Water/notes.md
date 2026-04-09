# Trapping Rain Water (LeetCode 42)

## 🧩 Problem  
Given an array representing height of bars, find how much water can be trapped after raining.

## ✅📃 My Approach (Initially)  
Used prefix and suffix arrays.  
Stored max height from left and right for each index.  
Then calculated water using min(leftMax, rightMax) - height[i].  
It didn't work got Runtime error, and used extra space.

## ❌ Issue  
Extra space O(n) used.  
Two arrays created unnecessarily.  
Can be optimized further.

## 🚀 Optimized Approach  
Used two pointer approach.  
Maintained lMax and rMax.  
Moved pointer with smaller height.  
And added in total if lMax > height[i] this helps in calculating water of container without using extra space
Calculated water of the container without extra space.

## 🧠 Learning  
Water depends on smaller boundary (min of leftMax and rightMax).  
Prefix-suffix approach helps understand logic.  
Two pointer is space-optimized version of same idea.  
Direction matters (left→right, right→left).

## ⏱ Complexity  
Brute: O(n), Space: O(n)  
Optimized: O(n), Space: O(1)
