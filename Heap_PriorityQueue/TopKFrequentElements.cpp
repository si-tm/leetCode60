#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        map<int, int> f;
        for(int i = 0;i < nums.size();i++){
            if(f.count(nums[i]) > 0) f[nums[i]]++;
            else f[nums[i]] = 1;
        }
        // auto 関数名 = [](引数の型1 引数名1, 引数の型2, 引数名2, ...) { 関数の処理 };
        auto comp = [&f](int n1, int n2){return f[n1] > f[n2];};
        priority_queue<int, vector<int>, decltype(comp)> heap(comp);

        
        for(pair<int, int> p: f){
            heap.push(p.first);
            if(heap.size() > k) heap.pop();
        }
        
        vector<int> top(k);

        for(int i = k - 1;i >= 0;i--){ 
            top[i] = heap.top();
            heap.pop();
        }

        return top;
    }
};