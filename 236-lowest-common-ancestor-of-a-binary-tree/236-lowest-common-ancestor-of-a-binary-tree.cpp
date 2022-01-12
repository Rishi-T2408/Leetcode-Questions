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
     bool Solve(TreeNode *root,TreeNode* &LCA,int n,int m)
    {
        if(root==NULL)
        {
            return false;
        }
        if(root->val==n || root->val==m)
        {
            LCA=root;
            return true;
        }
        bool l=Solve(root->left,LCA,n,m);
        bool r=Solve(root->right,LCA,n,m);
        if(l&&r)
        {
            LCA=root;
            return true;
        }
        else if(!l && !r)
        {
            return false;
        }
        return true;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
       TreeNode *LCA=NULL;
        int n=p->val;
        int m=q->val;
       Solve(root,LCA,n,m);
       return LCA;
    }
};