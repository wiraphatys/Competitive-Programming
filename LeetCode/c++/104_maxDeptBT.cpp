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
    int dfs(TreeNode *root, int maxDepth) {
        // return if focusing node is already null
        if (root == nullptr) return maxDepth;

        int l = dfs(root->left, maxDepth+1);
        int r = dfs(root->right, maxDepth+1);

        return max(l, r);
    }
public:
    int maxDepth(TreeNode *root) {
        if (root == nullptr) return 0;
        int l = dfs(root->left, 1);
        int r = dfs(root->right, 1);

        return max(l, r);
    }
};

int main() {
    return 0;
}