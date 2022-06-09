# Tree,BST
# Maximum Depth of Binary Tree
[問題](https://leetcode.com/problems/maximum-depth-of-binary-tree/)
## 問題訳
2分木の深さを求めなさい
## 解答
ノードを渡すと2つの子供のより深い方の深さを返す
- [自分の解答](./MaximumDepthOfBinaryTree.cpp)

# 
# Minimum Depth of Binary Tree
[問題](https://leetcode.com/problems/minimum-depth-of-binary-tree/)
## 問題訳
二分木の一番浅い深さを求めなさい

## 解答
- [参考](https://qiita.com/ishishow/items/395c4af8e0263ba43a05)
- [自分の解答](./MinimumDepthOfBinaryTree.cpp)


#
# Merge Two Binary Trees
[問題](https://leetcode.com/problems/merge-two-binary-trees/)
## 問題訳
2分木が2つ与えられます。
2つのノードの合計値とした値のノードを作成しなさい。

## 解答
- [自分の解答](./MergeTwoBinaryTrees.cpp)
#
# Convert Sorted Array to Binary Search Tree
[問題](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)
## 問題訳
昇順で並んだ数列numsをバランス木に作り直してください

## 解答
中央値を取り、そこから左右交互に木にしていく → x  
それぞれの右側と左側にソートされた配列の中間の値で区切ったものを次々と代入していく  

- [参考](https://qiita.com/KueharX/items/c7f88204cdba42144d9b)
- [自分の解答](./ConvertSortedArraytoBinarySearchTree.cpp)

# Path Sum
[問題](https://leetcode.com/problems/path-sum/)
## 問題訳
root(二分木の根)と、targetSum(int型)が与えられます。  
根から葉までの合計がtargetSumと等しくなるものがある場合true、そうでない場合falseを返しなさい  

## 解答
再帰していく

- [自分の解答](./PathSum.cpp)



