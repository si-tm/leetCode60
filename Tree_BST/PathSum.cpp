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
    vector<bool> s;
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr) return false;
        make_sum(root, targetSum);
        bool ans = 0;
        for(int i = 0;i < s.size();i++) if(s[i]) ans = true;
        return ans;
    }

    void make_sum(TreeNode* root, int targetSum){
        if(root == nullptr){
            s.push_back(targetSum == 0);
            return;
        }
        if(root->right != nullptr) hasPathSum(root->right, targetSum - root->val);
        if(root->left != nullptr) hasPathSum(root->left, targetSum - root->val);

        if(root->right == nullptr && root->left == nullptr) s.push_back((targetSum - root->val) == 0);
        return;
    }
};
