# 3Sum Problem

## 🧩 Problem
Find all unique triplets whose sum is 0.



## 💭 My Approach (Initially)

- Sorted the array  
- Used 3 pointers  
- Used a `set` to avoid duplicates  

It worked, but I was relying on extra space instead of thinking properly.



## ❌ Issue

- Used `set` → extra space  
- Slower due to insert operations  
- Didn’t fully use sorting  



## 🚀 Optimized Approach

- Sort the array  
- Fix one element  
- Use two pointers  
- Skip duplicates manually  

No extra data structure needed.



## 🧠 Learning

- Sorting gives structure, use it properly  
- Avoid `set` when duplicates can be handled logically  
- Optimal solution > just working solution  



## ⏱ Complexity

- Brute: O(n² log n), Space: O(n)  
- Optimized: O(n²), Space: O(1)  



