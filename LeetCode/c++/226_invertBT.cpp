#include<bits/stdc++.h>
using namespace std;


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
private:
    // the b-tree must be balanced tree
    void dfs(TreeNode *p) {
        if (p == nullptr) return;

        TreeNode *temp = p->left;
        p->left = p->right;
        p->right = temp;

        dfs(p->left);
        dfs(p->right);
    }
public:
    TreeNode *invertTree(TreeNode *root) {
        dfs(root);

        return root;
    }
};