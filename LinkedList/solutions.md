# Linked List
# Linked List Cycle ii
[問題](https://leetcode.com/problems/linked-list-cycle-ii/)  
## 問題訳
linked listのheadが渡されたら、サイクルが始まるnodeを返しなさい。無ければnullを返しなさい  

## 解法
1つ飛ばしで進むfastと飛ばさずに1つずつ進むslowを配置する。
H : 始点からcycleの起点までの距離
D : cycleの起点から、slowとfastが出会うまでの距離
L : cycle一周の距離
ここで、  
H + D : fastがslowと出会うまでに動いた距離  
H + D + L*n : slowがfastと出会うまでに動いた距離  
2*(H + D) = H + D + L*n   (n = 1, 2, ...)  
←→ H + D = L*n  
←→ H = L*n - D  
が成り立つ。   
ここで求めたいのはHであるから、  
L*n - D(= H)分進めたslow(H分進めたhead)が答えとなる。

- [参考にした解答 Python](https://qiita.com/mhiro216/items/b5e9f4cfd47eb1dcc1cb)  
- [参考にした解答 C++](https://jpdebug.com/p/1694016)  
- [自分の解答](./LinkedListCycle2.cpp)

# Remove Duplicates from Sorted List
[問題](https://leetcode.com/problems/remove-duplicates-from-sorted-list/)

## 問題訳
要素が昇順の連結リストの先頭nodeが与えられる。要素の重複を除いた連結リストを返しなさい。

## 解法
隣接した2つnodeを用意し、先頭から動かしていく。
2つの要素の値が一致した時、左の要素の接続先を右の要素の一つ隣にくっつける。  
- [自分の解答](./RemoveDuplicatesFromSortedList.cpp)