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
    void Solve(TreeNode *root,TreeNode *p,TreeNode *g,int &ans)
    {
        if(root==NULL)
        {
            return ;
        }
        if(g!=NULL && g->val%2==0)
            ans+=root->val;
        Solve(root->left,root,p,ans);
        Solve(root->right,root,p,ans);
    }
    
    int sumEvenGrandparent(TreeNode* root) {
        int ans=0;
        Solve(root,NULL,NULL,ans);
        return ans;
    }
};