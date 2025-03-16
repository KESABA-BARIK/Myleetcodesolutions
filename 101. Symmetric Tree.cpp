/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
bool isSmTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)return true;
        else if(!p || !q)return false;
        if(p->val != q->val)
        return false;
        return isSmTree(p->left, q->right) && isSmTree(p->right, q->left);
    }
    bool isSymmetric(TreeNode* root) {
        TreeNode* p = root->left;
        TreeNode* q = root->right;
        return isSmTree(p,q);
    }
};
