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
    map<int , map<int , multiset<int>>> nodes;
    void mark_nodes(TreeNode* root ,int col , int row){
        if(root == NULL){
            return;
        }
        nodes[col][row].insert(root->val);
        if(root->left){
            mark_nodes(root->left , col-1 , row +1);
        }
        if(root->right){
            mark_nodes(root->right , col+1 , row +1);
        }
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> result;
        mark_nodes(root , 0 , 0);
        for(auto &col : nodes){
            vector<int> column;
            for(auto &row : col.second){
                column.insert(column.end(),row.second.begin(),row.second.end());
            }
            result.push_back(column);
        }
        return result;
    }
    
};