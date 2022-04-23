#include <iostream>
#include <vector>
#include <set>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> s;
        for(int i = 0;i < emails.size();i++){
            // local部とdomain部に分ける
            string local, domain;
            tie(local, domain) = divide(emails[i]);
            // local部を加工する
            local = eliminateDotAndPlus(local);
            //setに入れる
            s.insert(local + '@' + domain);
        }

        return s.size();

    }

    pair<string, string> divide(string x){
        string y, z;
        bool beforeAt = 1;
        for(int i = 0;i < x.size();i++){
            if(x[i] == '@'){
                beforeAt = 0;
                continue;
            }
            if(beforeAt) y += x[i];
            else z += x[i];
        }
        return make_pair(y, z);
    }

    string eliminateDotAndPlus(string x){
        string y;
        for(int i = 0;i < x.size();i++){
            if(x[i] == '.') continue;
            if(x[i] == '+') break;
            y += x[i];
        }
        return y;
    }

};
