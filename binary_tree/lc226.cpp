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
    void invert(TreeNode* left_root,TreeNode* right_root){
        if(left_root == NULL && right_root==NULL){
            return;
        }
        else{
            TreeNode* temp = left_root;
            left_root = right_root;
            right_root = temp;
        }
       
        invert(left_root->left,right_root->right);
        invert(left_root->right,right_root->left);
    }
    
    TreeNode* invertTree(TreeNode* root) {
        invert(root->left,root->right);
        return root;
    }
};