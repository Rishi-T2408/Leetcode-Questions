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
    TreeNode* Solve(TreeNode *root,int val,TreeNode *temp)
    {
        if(root==NULL)
        {
            return temp;
        }
        if(val>root->val)
        root->right=Solve(root->right,val,temp);
        else if(val<root->val)
        root->left=Solve(root->left,val,temp);
        return root;
        
    }
    
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        //Iterative Done
        TreeNode *temp=new TreeNode(val);
        root=Solve(root,val,temp);
        return root;
    }
};