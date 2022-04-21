# Heap, PriorityQueue
# Kth Largest Element in a Stream
[問題](https://leetcode.com/problems/kth-largest-element-in-a-stream/)
## 問題訳
KthLargestクラスを作りなさい   
1. KthLargest(int k, int[] nums) : Kとストリームnumsを初期化する
2. int add(int val) : valをストリームnumに追加し、k番目の大きさの値を返しなさい

例
Input
["KthLargest", "add", "add", "add", "add", "add"]  
[[3, [4, 5, 8, 2]], [3], [5], [10], [9], [4]]  
Output  
[null, 4, 5, 5, 8, 8]  

Explanation  
KthLargest kthLargest = new KthLargest(3, [4, 5, 8, 2]);  [2, 4, 5, 8]  
kthLargest.add(3);   // return 4  [2, 3, 4, 5, 8]  
kthLargest.add(5);   // return 5  [2, 3, 4, 5, 5, 8]  
kthLargest.add(10);  // return 5  [2, 3, 4, 5, 5, 8, 10]    
kthLargest.add(9);   // return 8  [2, 3, 4, 5, 5, 8, 9, 10]    
kthLargest.add(4);   // return 8  [2, 3, 4, 4, 5, 5, 8, 9, 10]  

## 解答
priority_queueを用いる。  
KthLargestでは上からK個のみで構成されるlistを作成  
addでは、追加後にk-1番目  
- [参考解説](https://jpdebug.com/p/2027739)
- [priority_queue](https://cpprefjp.github.io/reference/queue/priority_queue.html)
# 
# Top K Frequent Elements
[問題](https://leetcode.com/problems/top-k-frequent-elements/)
## 問題訳
数列numと数字のkが与えられる。頻度が高い数字上位k個を返しなさい。

## 解答
(出現回数, 値)のheapを作り、上位k個を取り出す
- [参考解説](https://leetcode.com/problems/top-k-frequent-elements/solution/)
- [ラムダ式](https://atcoder.jp/contests/apg4b/tasks/APG4b_ad#:~:text=5-,%E3%83%A9%E3%83%A0%E3%83%80%E5%BC%8F%E3%81%AE%E8%A8%98%E6%B3%95,-%E5%9F%BA%E6%9C%AC%E7%9A%84%E3%81%AA)
- [priority_queue decltype](https://cpprefjp.github.io/reference/queue/priority_queue/op_deduction_guide.html)
- [自分の解答](./TopKFrequentElements.cpp)

# 
# Find K Pairs with Smallest Sums
[問題](https://leetcode.com/problems/find-k-pairs-with-smallest-sums/)
## 問題訳
昇順に並べられた2つの数列と整数kが与えられる。
ここで、合計値が最小になるk個の(nums1の要素, nums2の要素)ペアを返しなさい。

## 解答
1つずつ探す！  
例  
Input: nums1 = [1,1,2], nums2 = [1,2,3], k = 3  
(0, 0)   
(0, 1) or (1, 0) → (0, 1)  
(0, 2) or (1, 1) → (1, 1)  