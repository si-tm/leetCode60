# Dynamic Programming
# Maximum Subarray
[問題](https://leetcode.com/problems/maximum-subarray/)
## 問題訳
数列numsが与えられます。連続する部分列の内、合計値が最大のものを返しなさい。

## 解法
dp[i] := i番目までで最大の和
       = max(dp[i - 1] + a[i], a[i])
(例)  
nums = [-2,1,-3,4,-1,2,1,-5,4]  
dp = {-2, 1, -2, 4, 3, 5, 6, 1, 5}    
Explanation: [4,-1,2,1] has the largest sum = 6.  

nums = [5,4,-1,7,8]  
dp = {5, 9, 8, 15, 23}  
