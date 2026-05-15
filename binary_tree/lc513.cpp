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
        if(root==NULL){
            return 0;
        }
        int left_height = depth(root->left);
        int right_height = depth(root->right);
        return 1+max(left_height,right_height);
    }
    int findBottomLeftValue(TreeNode* root) {
        int max_depth = depth(root);
        queue<TreeNode*> q;
        q.push(root);
        int n=1;
        while(!q.empty()){
            int size = q.size();
            for(int i = 0 ; i < size ; i++){
                TreeNode* curr = q.front();
                if(n==max_depth){
                    return curr->val;
                }
                q.pop();
                if(curr->left){
                q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
                }
                n++;
            }
            return root->val;
        }
    
};