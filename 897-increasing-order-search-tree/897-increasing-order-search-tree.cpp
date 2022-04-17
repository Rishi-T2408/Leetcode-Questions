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
    
    void Solve(TreeNode *root,vector<int> &ino)
    {
        if(root==NULL) return ;
        Solve(root->left,ino);
        ino.push_back(root->val);
        Solve(root->right,ino);
    }
    
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> ino;
        Solve(root,ino);
        TreeNode *root1=NULL;
        TreeNode *p=NULL;
        for(int i=0;i<ino.size();i++)
        {
            TreeNode *t=new TreeNode(ino[i]);
            if(root1==NULL)
            {
                root1=t;
                p=t;
                p->left=NULL;
                p->right=NULL;
            }
            else{
                p->left=NULL;
                p->right=t;
                p=t;
            }
        }
        return root1;
    }
};