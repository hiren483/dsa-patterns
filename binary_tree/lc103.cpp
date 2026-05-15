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
    // vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
    //     vector<vector<int>> result;
        
    //     if(root == NULL){
    //         return result;
    //     }

    //     queue<TreeNode*> q;
    //     q.push(root);

    //     while(!q.empty()){

    //         int size = q.size();
    //         vector<int> level;

    //         for(int i = 0; i < size; i++){

    //             TreeNode* node = q.front();
    //             q.pop();

    //             level.push_back(node->val);

    //             if(node->left) q.push(node->left);
    //             if(node->right) q.push(node->right);
    //         }

    //         if(result.size() % 2 == 1){
    //             reverse(level.begin(), level.end());
    //         }

    //         result.push_back(level);
    //     }

    //     return result;
    // }



    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;
        queue<TreeNode*> q;
        q.push(root);
        int n=0;
        if(root==NULL){
            return result;
        }
        while(!q.empty()){
            int size= q.size();
            vector<int> curr_row(size,0);
            if(n%2==0){
                for(int i = 0; i< size ; i++){
                    TreeNode* curr = q.front();
                    curr_row[i]=curr->val;
                    q.pop();
                    if (curr->left) q.push(curr->left);
                    if (curr->right) q.push(curr->right);
                }
            }
            else{
                for(int i = size-1; i>=0 ; i--){
                    TreeNode* curr = q.front();
                    curr_row[i]=curr->val;
                    q.pop();
                    if (curr->left) q.push(curr->left);
                    if (curr->right) q.push(curr->right);
                }
            }
            n++;
            result.push_back(curr_row);
        }
        return result;
    }
};