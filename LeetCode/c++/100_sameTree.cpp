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
    void dfs(TreeNode *p, TreeNode *q, bool &result) {
        // pointer verification
        if (p == nullptr && q != nullptr || p != nullptr && q == nullptr) {
            result = false;
            return;
        } else if (p == nullptr && q == nullptr) return;

        // value verification
        if (p->val != q->val) {
            result = false;
            return;
        }
        
        dfs(p->left, q->left, result);
        dfs(p->right, q->right, result);
    }
public:
    bool isSameTree(TreeNode *p, TreeNode *q){
        bool result = true;
        dfs(p, q, result);

        return result;
    }
};