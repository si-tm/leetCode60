#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> dp_min(n), dp_max(n);
       
        for(int i = 0;i < n;i++){
            if(i == 0){
                dp_min[i] = prices[i];
                continue;
            }
            dp_min[i] = min(prices[i], dp_min[i - 1]);
        }
          
         
        for(int i = n - 1;i >= 0;i--){
            if(i == n - 1){
                dp_max[i] = prices[i];
                continue;
            }
            dp_max[i] = max(prices[i], dp_max[i + 1]);
        }

        int maxP = 0;
        for(int i = 0;i < n;i++) maxP = max(maxP, dp_max[i] - dp_min[i]);
        
        return maxP;

    }
    
    void print(vector<int> x){
        for(int i = 0;i < x.size();i++) cout << x[i] << " ";
        cout << endl;
    }
};
