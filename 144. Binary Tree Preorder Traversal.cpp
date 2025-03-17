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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> node;
        vector<int> ans;
        if(root == nullptr)return ans;
        node.push(root);
        while(!node.empty()){
            TreeNode* cur = node.top();
            node.pop();
            if(cur->right != NULL)node.push(cur->right);
            if(cur->left != NULL)node.push(cur->left);
            ans.push_back(cur->val);
        }
        return ans;
    }
};
