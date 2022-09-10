# HashMap
# Intersection of Two Arrays

[問題](https://leetcode.com/problems/intersection-of-two-arrays/)
## 問題訳
2つの数列が与えられます。共通する要素から成る数列を返しなさい。 
## 解答
setを用いて、積集合を作る。
- [set_intersection c++](https://cpprefjp.github.io/reference/algorithm/set_intersection.html)  
# 
# Unique Email Addresses
[問題](https://leetcode.com/problems/unique-email-addresses/)
## 問題訳
eメールは以下のように構成されていて、  
[local name]@[domain name]  
1. local nameに`.`が入っていても無視される
2. local nameに`+`が入っている場合、`+`以降は無視される
以上を踏まえて、与えられたeメールの列のうち、要素が何種類に振り分けられるか返せ。

## 解答
setにする

# 
# First Unique Character in a String
[問題](https://leetcode.com/problems/first-unique-character-in-a-string/)
## 問題訳
文字列のうち、単独である左から数えて一番初めの要素のindexを返せ

## 解答
(例)  
map['文字'] = その文字が単独かどうか


#
# Group Anagrams
[問題](https://leetcode.com/problems/group-anagrams/)
## 問題訳
文字列の集合が与えられます。アナグラムのグループ分けをしてください。

## 解答
全てソートする。
同じものを集合する。
- [自分の解答](./GroupAnagrams.cpp)


#
# Subarray Sum Equals K
[問題](https://leetcode.com/problems/subarray-sum-equals-k/)
## 問題訳
数列と数kが与えられます。合計値がkとなる部分列の個数を返しなさい。
ただし、部分列は連続で、空列ではありません。

## 制約
- 1 <= nums.length <= 2*10^4
- -1000 <= nums[i] <= 1000
- -10^7 <= k <= 10^7
## 解答
累積和を作りながら、過去の合計値をさがす
- [自分の解答](./SubarraySumEqualsK.cpp)

