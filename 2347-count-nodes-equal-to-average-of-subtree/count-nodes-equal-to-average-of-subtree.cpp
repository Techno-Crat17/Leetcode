/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
    int ans = 0;

    void dfs(TreeNode* root, int &sum, int &count) {
        if (!root) {
            sum = 0;
            count = 0;
            return;
        }

        int Lsum, Lcount, Rsum, Rcount;
        dfs(root->left, Lsum, Lcount);
        dfs(root->right, Rsum, Rcount);

        sum = Lsum + Rsum + root->val;
        count = Lcount + Rcount + 1;

        if ((sum / count) == root->val)
            ans++;
    }

public:
    int averageOfSubtree(TreeNode* root) {
        int sum=0;
        int cnt=0;
        dfs(root,sum,cnt);
        return ans;
    }
};