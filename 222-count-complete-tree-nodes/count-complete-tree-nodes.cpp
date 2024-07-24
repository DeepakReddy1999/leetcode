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
    int countNodes(TreeNode* root) {
        if(!root) return 0 ;

        int lefth=0,righth=0;

        TreeNode* left=root,*right=root;

        while(left){
            left=left->left;
            lefth++;
        }
        while(right){
            right=right->right;
            righth++;
        }

        if(lefth==righth){
            return (1<<lefth)-1;
        }
        else return 1+countNodes(root->left)+countNodes(root->right);

    }
};