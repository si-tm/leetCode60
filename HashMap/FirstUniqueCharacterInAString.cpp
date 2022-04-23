#include <iostream>
#include <vector>
#include <map>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();

class Solution {
public:
    int firstUniqChar(string s) {
        map<char, bool> m;
        for(int i = 0;i < s.size();i++){
            if(m.count(s[i]) > 0){
                m[s[i]] = 0;
            }
            else m[s[i]] = 1;
        }
        int firstIndex = -1;
        for(int i = 0;i < s.size();i++){
            if(m[s[i]]){
                firstIndex = i;
                break;
            }
        }
        return firstIndex;
    }
};