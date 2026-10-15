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
    void inorder_result(TreeNode* root,vector<int>&inorder){
        if(root==NULL) return;
        inorder_result(root->left,inorder);
        inorder.push_back(root->val);
        inorder_result(root->right,inorder);
    }
    bool twoSum(vector<int>&inorder,int k){
        for(int i=0;i<inorder.size();i++){
            for(int j=1;j<inorder.size();j++){
                if(i!=j && inorder[i]+inorder[j]==k){
                    return 1;
                }
            }
        }
        return 0;
    }
    
    bool findTarget(TreeNode* root, int k) {
        vector<int>inorder;
        inorder_result(root,inorder);
        return twoSum(inorder,k);
    }
};