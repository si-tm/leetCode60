#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int, int> m;
        m[0] = 1;
        int ans = 0, calc = 0;
        // 累積和を作る
        // 差がkになる部分列を探す
        for(int i = 0;i < nums.size();i++){
            calc += nums[i];
            ans += m[calc - k];
            m[calc] = m[calc] + 1;
        }
        return ans;
    }
};
