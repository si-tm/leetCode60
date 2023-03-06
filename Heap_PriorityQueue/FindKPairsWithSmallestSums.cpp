#include <bits/stdc++.h>
#include <stack>
using namespace std;
struct Data{
   int firstVal, secondVal, idx;
   Data(int a, int b, int c){
      firstVal = a;
      secondVal = b;
      idx = c;
   }
};
struct Comparator{
   bool operator()(Data a, Data b){
      return !(a.firstVal + a.secondVal < b.firstVal + b.secondVal);
   }
};
class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {     priority_queue <Data, vector <Data>, Comparator> pq;
      int n = nums1.size();
      int m = nums2.size();
      if(!n || !m)return {};
      vector < vector <int> > ret;
      for(int i = 0; i < n; i++){
         pq.push(Data(nums1[i], nums2[0], 0));
      }
      while(!pq.empty() && k--){
         Data curr = pq.top();
         pq.pop();
         ret.push_back({curr.firstVal, curr.secondVal});
         if(curr.idx + 1 < m){
            pq.push(Data(curr.firstVal, nums2[curr.idx + 1], curr.idx + 1));
         }
      }
      return ret;
   }
};