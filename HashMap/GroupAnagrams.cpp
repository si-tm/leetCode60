#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> m;
        // m[ソート済みの文字列] = {文字列, 文字列, ... 文字列}
        for(int i = 0;i < strs.size();i++){
            string tmp = strs[i];
            sort(strs[i].begin(), strs[i].end());
            if(m.count(strs[i]) > 0){
                m[strs[i]].push_back(tmp);
            }
            else{
                vector<string> x;
                x.push_back(tmp);
                m[strs[i]] = x;
            }
        }

        // mapからvectorに移す
        auto iter = m.begin();
        vector<vector<string>> ans;
        while (iter != m.end()) {
            ans.push_back(iter->second);
            // cout << "[" << iter->first << ","
            //             << iter->second << "]\n";
            ++iter;
        }
        

        return ans;
    }
};
