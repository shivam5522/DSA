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
    void traverse(TreeNode* root, vector<int>& final){
        if(root==NULL) return;
        traverse(root->left,final);
        final.push_back(root->val);
        traverse(root->right,final);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> final;
        traverse(root,final);
        return final;
    }
};