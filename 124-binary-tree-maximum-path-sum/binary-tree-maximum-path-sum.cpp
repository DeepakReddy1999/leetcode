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
     int recursion(TreeNode* root,int &maximum){
      if(root==NULL) return 0;

      int ls= max(0,recursion(root->left, maximum));
      int rs=max(0,recursion(root->right, maximum));

      maximum=max(maximum,ls+root->val+rs);
      return (root->val+max(rs,ls));
      
     }
         




    int maxPathSum(TreeNode* root) {
        int maximum=INT_MIN;
        recursion(root,maximum);
        return maximum;
    }
};