#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();

class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>> ans;
        int s = nums1.size(), t = nums2.size();
        int s_index = 0, t_index = 0;
        for(int i = 0;i < min(k, s*t);i++){
            vector<int> tmp;
            if(i != 0 && s_index + 1 < s && t_index + 1 < t){
                if(nums1[s_index + 1] + nums2[t_index] == nums1[s_index] + nums2[t_index + 1]){
                    vector<int> tmp1;
                    tmp1.push_back(nums1[s_index + 1]);
                    tmp1.push_back(nums2[t_index]);
                    ans.push_back(tmp1);
                    i++;
                    if(i >= min(k, s*t)) break;
                    t_index++;
                }
                else if(nums1[s_index + 1] + nums2[t_index] < nums1[s_index] + nums2[t_index + 1]){
                    s_index++;
                }
                else t_index++;
            }
            else if(s_index + 1 == s) t_index++;
            else if(t_index + 1 == t) s_index++;
            tmp.push_back(nums1[s_index]);
            tmp.push_back(nums2[t_index]);
            ans.push_back(tmp);
        }
        return ans;
    }
};