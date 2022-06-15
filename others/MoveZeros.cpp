#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int i = nums.size() - 1;i >= 0;i--){
            if(nums[i] == 0){
                for(int j = i + 1;j < nums.size();j++){
                    int tmp = nums[j - 1];
                    nums[j - 1] = nums[j];
                    nums[j] = tmp;
                }
            }
        }
    }
};
