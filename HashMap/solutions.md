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
