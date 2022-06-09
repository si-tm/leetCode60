#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
#define rep(i,n) for(int i=0; i<(n); i++)
const long long INF = numeric_limits<long long>::max();

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    int minDepth(TreeNode* root) {
        return depth(root);
    }

    int depth(TreeNode* tmp){
        if(tmp == nullptr) return 0;
        if(tmp->left == nullptr || tmp->right == nullptr) return depth(tmp->right) + depth(tmp->left) + 1;
        return min(depth(tmp->left), depth(tmp->right)) + 1;
    }
};