
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
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        TreeNode* tmp;
        if(root1 != nullptr && root2 != nullptr) tmp = new TreeNode(root1->val + root2->val);
        else if(root1 != nullptr) return root1;
        else if(root2 != nullptr) return root2;
        else return root1;

        tmp->right = mergeTrees(root1->right, root2->right);
        tmp->left = mergeTrees(root1->left, root2->left);

        return tmp;
    }

};