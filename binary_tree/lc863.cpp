/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
TreeNode* dfs(TreeNode* root, TreeNode* target) {
    if (root == NULL) {
        return NULL;
    }
    
    if (root->val == target->val) {
        return root;
    }
    
    TreeNode* left = dfs(root->left, target);
    if (left != NULL) {
        return left;
    }
    
    TreeNode* right = dfs(root->right, target);
    return right;
}

    map<TreeNode* , TreeNode*> parent;
    void map_parent(TreeNode* root){
        if(root == NULL){
            return;
        }
        if(root->left){
            parent[root->left] = root;
            map_parent(root->left);
        }
        if(root->right){
            parent[root->right] = root;
            map_parent(root->right);
        }
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int> ans;
        TreeNode* target_node = dfs(root,target);
        queue<TreeNode*> q;
    }
};