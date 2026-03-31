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
    map<TreeNode*, TreeNode*> parent;

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

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        parent[root] = NULL;
        map_parent(root);

        set<TreeNode*> ancestors;

        TreeNode* temp = p;
        while(temp != NULL){
            ancestors.insert(temp);
            temp = parent[temp];
        }

        temp = q;
        while(temp != NULL){
            if(ancestors.count(temp)){
                return temp;
            }
            temp = parent[temp];
        }

        return NULL;
     }
};


// recursion short sol 

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if(root == NULL || root == p || root == q)
        return root;

    TreeNode* left = lowestCommonAncestor(root->left, p, q);
    TreeNode* right = lowestCommonAncestor(root->right, p, q);

    if(left && right)
        return root;

    return left ? left : right;
}