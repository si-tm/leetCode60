#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n);
        int maxsubarray = -INT_MAX;
        for(int i = 0;i < n;i++){
            if(i == 0){
                dp[i] = nums[i];
            }
            else dp[i] = max(dp[i - 1] + nums[i], nums[i]);
            maxsubarray = max(maxsubarray, dp[i]);
        }

        return maxsubarray;
        
    }
};