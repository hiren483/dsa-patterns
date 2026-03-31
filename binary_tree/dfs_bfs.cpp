#include<iostream>
using namespace std;
//bfs

void bfs(TreeNode* root){
    if(root == null){
        return;
    }
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* node = q.front();
        q.pop();
        cout<<node->val<<" ";
        if(node->left){
            q.push(node->left);
        }
        if(node->right){
            q.push(node->right);
        }
    }
}
//when you want level wise 
// This pattern appears in problems like:

// Level order traversal

// Binary Tree Right Side View

// Minimum depth of binary tree

// Zigzag traversal

// Burning tree problems

void bfs(TreeNode* root){
    if(root == null){
        return;
    }
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        for(int i=0 ; i < size ; i++){
            TreeNode* curr = q.front();
            q.pop();
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
    }
}
//dfs
//preorder
void dfs(TreeNode* root){
    if(root==NULL){
        return;
    }
    cout<<root->val<<" ";
    dfs(root->left);
    dfs(root->right);
}

int main(){
    vector<int> nums = {2,3,1,2,4,3};
    cout<<minSubArrayLen(7 , nums);
}
