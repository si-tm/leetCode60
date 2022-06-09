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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        int center = n/2;
        int l = center, r = center;

        if(n == 0) return nullptr;

        TreeNode* root = new TreeNode(nums[center]);

        if(center != 0){
            vector<int> lv(center);
            copy(nums.begin(), nums.begin()+center, lv.begin());
            cout << 0 << " " << center-1 << " ";
            cout << "l : ";
            print(lv);
            root->left = sortedArrayToBST(lv);
        }

        if(center < n - 1){
            vector<int> rv(n - center - 1);
            copy(nums.begin()+center+1, nums.begin()+n, rv.begin());
            cout << center+1 << " " << n - 1 << " ";
            cout << "r : ";
            print(rv);
            root->right = sortedArrayToBST(rv);
        }
        
        return root;
    }
    
    void print(vector<int> x){
        for(int i = 0;i < x.size();i++) cout << x[i] << " ";
        cout << endl;
    }
};