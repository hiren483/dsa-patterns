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

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        if(root == NULL) result result ;
        queue<TreeNode*> q;
        q.push_back(root);
        while(q.size()>0){
            int size= q.size();
            vector<int> level;
            for(int i = 0; i < q.size() ; i++){
                TreeNode* node = q.front();
                q.pop();
                level.push_back(node->val);
                if(node->right){
                    q.push(node->right->val);
                }
                if(node->left){
                    q.push(node->left->val);
                }
            }
            result.push_back(level);
        }
        return result ;
    }
};