#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> min_sum;
        vector<int> tmp = {nums1[0], nums2[0]};
        pair<int, int> tmp_index = make_pair(0, 0);
        for(int i = 0;i < k;i++){
            if(i == 0){
                min_sum.push_back(tmp);
                continue;
            }
            if(tmp_index.first - 1 == tmp_index.first){

            }
        }
    }
};