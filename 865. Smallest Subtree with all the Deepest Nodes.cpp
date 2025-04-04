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
int depth(TreeNode* root){
    if(!root)return 0;
    return max(depth(root->left), depth(root->right))+1;
}
TreeNode* dfs(TreeNode* root, int depth, int l){
    if(!root)return nullptr;
    if(l+1 == depth)return root;
    TreeNode* left = dfs(root->left, depth, l+1);
    TreeNode* right = dfs(root->right, depth, l+1);
    if(left && right)return root;
    return right?right:left;
}
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        int d = depth(root);
        return dfs(root, d, 0);
    }
};
