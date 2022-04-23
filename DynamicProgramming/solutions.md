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

# 
#  Best Time to Buy and Sell Stock
[問題](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/)

## 問題訳
price[i] : i日目の在庫の値段  として与えられる
利益が最大になる買う日と売る日を選んで、最大の利益を返しなさい
利益が得られない場合には0を返しなさい

## 解法
左から、これまでの値段で最小の価格
右から、これまでの値段で最大の価格を選ぶ
(例)  
prices = [7, 1, 5, 3, 6, 4]  
prices_min = [7, 1, 1, 1, 1, 1] (左から)  
prices_max = [7, 6, 6, 6, 6, 4] (右から)   


# 
# 