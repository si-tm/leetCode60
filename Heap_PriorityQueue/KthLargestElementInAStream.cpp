#include<vector>
#include<iostream>
#include<queue>
using namespace std;

class KthLargest {
    int K;
    priority_queue<int, vector<int>, greater<int>> heap;
public:
    KthLargest(int k, vector<int>& nums) {
        K = k;
        for(int i = 0;i < nums.size();i++){
            heap.push(nums[i]);
        }
        //topをk番目とする
        while(heap.size() > k){
            heap.pop();
        }
    }
    int add(int val){
        heap.push(val);
        if(heap.size() > K) heap.pop();
        return heap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */