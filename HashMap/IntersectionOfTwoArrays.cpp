#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <iterator>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> a;
        set<int> b;
        set<int> result;

        //nums1, nums2をsetに入れる
        for(int i = 0;i < nums1.size();i++){
            a.insert(nums1[i]);
        }
        for(int i = 0;i < nums2.size();i++){
            b.insert(nums2[i]);
        }

        // aとbの積集合を作る
        std::set_intersection(a.begin(), a.end(),
                                b.begin(), b.end(),
                                std::inserter(result, result.end()));

        vector<int> intersection_set;

         std::for_each(result.begin(), result.end(), [&intersection_set](int x) {
            intersection_set.push_back(x);
        });


        return intersection_set;
    }
};