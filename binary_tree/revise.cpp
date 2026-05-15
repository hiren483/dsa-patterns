void bfs(TreeNode* root){

    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        for(int i =0 ; i < size;i++){
            TreeNode* curr = q.front();
            q.pop();
            //read root
            if(crr->left){
                q.push(crr->left);
            }
            if(crr->right){
                q.push(crr->right);
            }
        }
    }
}


class Solution {
public:
    int maxDepth(TreeNode* root) {
        
        if(root==NULL){return 0;}
        if(root->left){
            int left_height= maxDepth(root->left);
        }
        if(root->right){
            int right_height= maxDepth(root->right);
        }
        return 1 + max(left_height,right_height);

    }
};